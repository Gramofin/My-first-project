CXX = g++
CXXFLAGS = -Wall
LFLAGS = 

OBJS = main.o konta.o maszyna3.o maszyna2.o maszyna1.o maszyn.OBJS

all: prog

prog: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o prog

.PHONY: all clean