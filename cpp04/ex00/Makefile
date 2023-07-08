
PROG_NAME=ANIMAL_FARM

all: main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp 
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

animal: a_main.cpp Animal.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

cat: c_main.cpp Animal.cpp Cat.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)
	
dog: d_main.cpp Animal.cpp Dog.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)
	

run: $(PROG_NAME)
	./$(PROG_NAME)

edit1: 
	vi main.cpp

edit2:
	vi Dog.cpp

edit3:
	vi Cat.cpp

edit4:
	vi Animal.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME)
	@rm -f ./a.out
