#ifndef WANIMAL_H
# define WANIMAL_H
# include <iostream>

class WrongAnimal { 
	private:
	std::string type;
	std::string noise;

	public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal &_wronganimal );
	void	operator=( const WrongAnimal &_wronganimal );
	~WrongAnimal( void );

	const	std::string	&getType() const;
	void			makeSound() const;
};

#endif
