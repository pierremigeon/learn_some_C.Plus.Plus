
all: main.cpp
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o loser_sed 

run: loser_sed
	./loser_sed test.txt a b

clean:
	@rm -f ./loser_sed
