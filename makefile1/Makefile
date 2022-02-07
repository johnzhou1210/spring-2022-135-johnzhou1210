# This is just a comment (like Python comments)
# If you just type "make", the topmost target is run.
# You can also specify by typing "make main", "make help", etc.
# using ampersand next to echo makes the commands not show up in terminal

main: main.cpp
	g++ -o main main.cpp

help:
	@echo "This is a help screen"
	@echo "You can make main"
	@echo "or make clean (not yet)"
	@echo "or make help"
	@echo "or make chain1, chain2, or chain3"
chain: chain2 chain3
	@echo "Chain was called"
chain2: chain3
	@echo "Chain 2 was called"
chain3:
	@echo "chain 3 was called"
	@ls
