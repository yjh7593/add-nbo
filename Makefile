all: add-nbo

add-nbo: fread4b.o main.o
	g++ -o add-nbo fread4b.o main.o

main.o: fread4b.h main.cpp 
	g++ -c -o main.o main.cpp 

fread4b.o: fread4b.cpp fread4b.h
	g++ -c -o fread4b.o fread4b.cpp

clean:
	rm -f add-nbo
	rm -f *.o
