run: Reverse.o main.o Truckloads.o 
	g++ Reverse.cpp main.cpp Truckloads.cpp -o run

Revese.o: Reverse.cpp Reverse.h 
	g++ -c Reverse.cpp

main.o: main.cpp
	g++ -c main.cpp

Truckloads.o: Truckloads.cpp Truckloads.h
	g++ -c Truckloads.cpp 

clean:
	rm *.o 
