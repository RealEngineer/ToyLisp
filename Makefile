# Main make file for ToyLisp project.

CC := g++ -std=c++11 -Iinc

Main: src/Main.cpp
	${CC} -o bin/Main src/Main.cpp

clean:
	rm -rf bin/* obj/*
