
all: main.cpp Fixed.cpp
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o FixPoint_2

run: FixPoint_2
	./FixPoint_2

edit: 
	vi Fixed.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./FixPoint_2
	@rm -f ./a.out
