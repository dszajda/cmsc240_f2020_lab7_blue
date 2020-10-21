EXECS = tester
OBJS = Shape.o Rectangle.o tester.o 

CC = g++
CCFLAGS = -std=c++17 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

%.o: %.cpp %.h	
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp 
	$(CC) $(CCFLAGS) -c $<			

tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

clean: 
	/bin/rm -f a.out $(OBJS) $(EXECS)

