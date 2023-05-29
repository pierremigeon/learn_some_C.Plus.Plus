#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl () {
	this->function[0] = &Harl::debug; 
	this->function[1] = &Harl::info;
	this->function[2] = &Harl::warning; 
	this->function[3] = &Harl::error;
}

std::string	make_upper(std::string str) {
	for (int i = 0; i < (int)str.length(); i++) {
		str[i] = toupper(str[i]); 
	}
	return str;
}

void    Harl::complain( std::string level ) {
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	level = make_upper(level);
	for (int i = 0; i <= 4; i++) {
		if (i == 4) {
			std::cout << "incorrect level reference\n" << std::endl;
			break;
		}
		if (level == names[i]) {
			std::cout << "[" << level << "]" << std::endl;
			(this->*function[i])();	
			std::cout << "\n";
			break;
		}
	}
}
