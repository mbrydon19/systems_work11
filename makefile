all: stat.o
	gcc -o test stat.o

stat.o: stat.c
	gcc -c stat.c

run:
	./test

clean:
	rm *.o*
	rm *.txt