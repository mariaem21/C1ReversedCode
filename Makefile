# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Source files
SRCS = gass.cpp augh.cpp x_y_z.cpp passwordVerification.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable
EXEC = myprogram

# Targets
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
