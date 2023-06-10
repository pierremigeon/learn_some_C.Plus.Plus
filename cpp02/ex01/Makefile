
all: main.cpp Fixed.cpp
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o FixPoint_1

run: FixPoint_test
	./FixPoint_1

edit: 
	vi Fixed.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./FixPoint_1
	@rm -f ./a.out
