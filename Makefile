explode: main.o lab1.o
	g++ main.o lab1.o -o explode
main.o: main.c
	g++ -c main.c
lab1.o: lab1.c
	g++ -c lab1.c
clean:
	-rm -rf *.o explode
