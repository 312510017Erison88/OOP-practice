CHECKCC = valgrind
CHECKFLAGS = --leak-check=full -s --show-leak-kinds=all --track-origins=yes 

all: 0811549

overhead.o: overhead.cpp
	g++ -c overhead.cpp
main.o: main.cpp
	g++ -c main.cpp
0811549: main.o overhead.o
	g++ -o 0811549 main.o overhead.o

do:
	./0811549 input.in output.out

diff:
	diff -w output1.out an1 > diff1

check:
	$(CHECKCC) $(CHECKFLAGS) ./0811549 input.in output.out

clean:
	rm -rf *.o 0811549 *.out