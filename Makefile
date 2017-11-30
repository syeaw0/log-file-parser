#File: Makefile
#Group members: Jeremy Stefun, Samuel Yeaw, Hector Camacho, Duy Nguyen
#Course: CPSC 254

default: main.exe

Data.o: Data.cpp
        g++ -c Data.cpp
main.o: Main.cpp
        g++ -c main.cpp
Parser.o: Parser.cpp
        g++ -c Parser.cpp
main.exe: main.o Data.o Parser.o
        g++ main.o Data.o Parser.o -o main.exe
clean:
        rm *.0 *.exe



