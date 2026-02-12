CXX = g++
CXXFLAGS=-Wall -O
# LFLAGS = 

OBJS = main.o rownosc.o czystosc.o szczescia.o konta.o maszyn.o

all: $(OBJS) 
	$(CXX) $^ -o $@

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f *.o prog

.PHONY: clean