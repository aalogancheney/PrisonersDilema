### The Prisoner's Dilemma

## History

The Prisoner's Dilemma is a classical problem spanning several areas of study, including politics, history, mathematics, probability, game theory, and human morality. A seemingly simple problem yields interesting consequences and may help provide a basis for understanding why altruism persists in a world that seems to favor the ruthless and selfish. 

## The Classic Scenario

There are many versions of the Prisoner's Dilemma, but a traditional example proceeds as follows:

Two strangers have agreed to join forces in an attempt to rob a bank, but are unsuccessful and caught by authorities. The two theives are placed into separate interrogation rooms, and a detective approaches each individual with the following deal:

"We have enough evidence to put both of you behind bars for at least 1 year, but we would like to have a longer sentence for at least one of you. If you agree to testify against your partner and they don't turn on you, we will let you go and they will spend 3 years in prison. If they testify against you and you stay silent, however, you will go to prison for 3 years and they will go free. In the case you both testify against each other, you will each spend 2 years in prison."

You are not allowed to speak to your accomplice; what do you do?

To summarize the scenario, we can look at the potential outcomes in a decision matrix for two criminals, Bonnie and Clyde:

|                          |  Bonnie Stays Silent  |  Bonnie Betrays Clyde |
|:------------------------:|:---------------------:|:---------------------:|
|  **Clyde Stays Silent**  | Bonnie = 1, Clyde = 1 | Bonnie = 0, Clyde = 3 |
| **Clyde Betrays Bonnie** | Bonnie = 3, Clyde = 0 | Bonnie = 2, Clyde = 2 |

The "dilemma" part of this problem arrises when you consider how two rational human beings would act in this situation. Surely no one would feel any kind of loyalty toward someone they just met, and with the potential of spending 3 years in prison most rational people would choose to betray their co-conspiritor. However, upon further investigation, it is in both parties interest to stay silent! While each person would spend 1 year in prison, the sentence would be a third of the total potential time, and half of the time if they both betray each other. Yet human intuition says we should betray the other person with the hopes of going free and avoiding 3 years in prison. 

## One-Time vs. Iterative 

In the example provided above, the scenario only occurs once and the outcome is determined immediately. The "winning" strategy is to betray the other person. But what if we allow for multiple iterations of the same scenario? Does the optimal strategy change, and if so what is the best strategy? 