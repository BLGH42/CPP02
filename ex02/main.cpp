#include "Fixed.hpp"

int	main (void) {

	Fixed	b ( 12.89123123f );

	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b++ << std::endl;
	std::cout << b << std::endl;
	return 0;
}
