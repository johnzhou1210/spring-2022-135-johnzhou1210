# This is just a comment (like Python comments)
# If you just type "make", the topmost target is run.
# You can also specify by typing "make main", "make help", etc.
# using ampersand next to echo makes the commands not show up in terminal

main: main.o
	g++ -o main main.o

main: main.cpp
	g++ -c main.cpp

clean:
	rm main.o

help:
	@echo "Targets: main"
	@echo "					clean"
	@echo "					help"
