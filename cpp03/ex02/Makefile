
PROG_NAME=FRAGTRAP

all: main.cpp ClapTrap.cpp Node.cpp HeadPoint.cpp ScavTrap.cpp FragTrap.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

run: $(PROG_NAME)
	./$(PROG_NAME)

edit: 
	vi FragTrap.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME)
	@rm -f ./a.out
