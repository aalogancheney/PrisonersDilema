# The Prisoner's Dilemma

## History

The Prisoner's Dilemma is a classical problem spanning several areas of study, including politics, history, mathematics, probability, game theory, and human morality. A seemingly simple problem yields interesting consequences and may help provide a basis for understanding why altruism persists in a world that seems to favor the ruthless and selfish. 

## The Classic Scenario

There are many versions of the Prisoner's Dilemma, but a traditional example proceeds as follows:

>Two strangers have agreed to join forces in an attempt to rob a bank, but are unsuccessful and caught by authorities. The two theives are placed into separate interrogation rooms, and a detective approaches each individual with the following deal:

>"We have enough evidence to put both of you behind bars for at least 1 year, but we would like to have a longer sentence for at least one of you. If you agree to testify against your partner and they don't turn on you, we will let you go and they will spend 3 years in prison. If they testify against you and you stay silent, however, you will go to prison for 3 years and they will go free. In the case you both testify against each other, you will each spend 2 years in prison."

>You are not allowed to speak to your accomplice; what do you do?

To summarize the scenario, we can look at the potential outcomes in a decision matrix for two criminals, Bonnie and Clyde:

|                          |  Bonnie Stays Silent  |  Bonnie Betrays Clyde |
|:------------------------:|:---------------------:|:---------------------:|
|  **Clyde Stays Silent**  | Bonnie = 1, Clyde = 1 | Bonnie = 0, Clyde = 3 |
| **Clyde Betrays Bonnie** | Bonnie = 3, Clyde = 0 | Bonnie = 2, Clyde = 2 |

The "dilemma" part of this problem arrises when you consider how two rational human beings would act in this situation. Surely no one would feel any kind of loyalty toward someone they just met, and with the potential of spending 3 years in prison most rational people would choose to betray their co-conspiritor. However, upon further investigation, it is in both parties interest to stay silent! While each person would spend 1 year in prison, the sentence would be a third of the total potential time, and half of the time if they both betray each other. Yet human intuition says we should betray the other person with the hopes of going free and avoiding 3 years in prison. 

## One-Time vs. Iterative 

In the example provided above, the scenario only occurs once and the outcome is determined immediately. The "winning" strategy is to betray the other person. But what if we allow for multiple iterations of the same scenario? Does the optimal strategy change, and if so what is the best strategy? 

## Robert Axelrod

In the early 1980's the optimal strategy for the iterative scenario was still unknown, and mathematicians were still struggling to formally provide an answer. Although an agreed-upon solution did not exist, several political scientists, mathematicians, and computer programmers believed they had studied the prisoner's dilemma well enough that they had a winning strategy. So, Robert Axelrod organized a competition: anyone could submit their computer program, and when entries were closed Axelrod would run each program against each other program 200 times to find the winner. 

At the time Axelrod believed a winning strategy would consist of thousands or tens of thousands of lines of code, utilizing behavioural analytics of the other player's moves and complex decision algorithms.

He was, like most everyone else, shocked to discover the optimal solution could be expressed in only a few lines of code. 

## The Code

In this repo you will find a base class which implements everything any C++ program needs to participate -- except, of course, how to decide what move to make.

The [`prisonersdilemma.h`](https://github.com/aalogancheney/PrisonersDilema/blob/master/prisonersdilemma.h) file implements this base class, with a pure `virtual` method `SendMyMove()`, which is left for each individual program to create. All of the data tracking is done by the `Dilemma` class, and the simulation can be run from the [`runsimulation.cpp`](https://github.com/aalogancheney/PrisonersDilema/blob/master/runsimulation.cpp) file. A [`makefile`](https://github.com/aalogancheney/PrisonersDilema/blob/master/makefile) is also provided for easy compilation.

Several strategies have been implemented here, namely [`lucifer.h`](https://github.com/aalogancheney/PrisonersDilema/blob/master/lucifer.h), [`jesus.h`](https://github.com/aalogancheney/PrisonersDilema/blob/master/jesus.h), [`fiftyfifty.h`](https://github.com/aalogancheney/PrisonersDilema/blob/master/fiftyfifty.h), and [`titfortat.h`](https://github.com/aalogancheney/PrisonersDilema/blob/master/titfortat.h).  None of these implemetations do anything particularly special, but one of them does contain the optimal strategy...

To create your own strategy, simply implement your own `class` that publically derives from `Dilemma` and insert your strategy on line [18](https://github.com/aalogancheney/PrisonersDilema/blob/master/runsimulation.cpp#L18).