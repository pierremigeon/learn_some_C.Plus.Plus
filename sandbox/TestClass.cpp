#include <iostream>



class Test {
	public:
	int a;
};

void	Test::operator = (const Test &t) {
	a = t.a;
}

int	main() {
	Test x;
	Test y;

	x.a = 5;
	y = x;

	std::cout << y.a << std::endl;
	return (0);
}
