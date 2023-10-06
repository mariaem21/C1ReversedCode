CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

all: program

program: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f program $(OBJS)
