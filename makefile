all: construct.o
	gcc -o construct construct.o
construct.o: construct.c
	gcc -c construct.c
run:
	./construct
