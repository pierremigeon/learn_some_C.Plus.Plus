
all: main.cpp Fixed.cpp Point.cpp bsp.cpp 
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o FixPoint_3

run: FixPoint_3
	./FixPoint_3

edit_1:
	vi Point.cpp
edit_2:
	vi Point.hpp
edit_3:
	vi bsq.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./FixPoint_3
	@rm -f ./a.out
