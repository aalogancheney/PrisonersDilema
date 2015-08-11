CXX = g++
CXXFLAGS = -g -Wall
SOURCES = fiftyfifty.cpp titfortat.cpp jesus.cpp lucifer.cpp runsimulation.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = simulation

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm $(OBJECTS) $(EXECUTABLE)