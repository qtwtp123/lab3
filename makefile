Cow: Cow.o main.o
	g++ -o Cow main.o Cow.o
Cow.o: Cow.cpp Cow.h
	g++ -c Cow.cpp
main.o: main.cpp Cow.h
	g++ -c main.cpp

clean:
	rm *.o
