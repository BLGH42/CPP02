#include "Fixed.hpp"

int	main (void) {

	Fixed	fixed1;
	Fixed	fixed2 (fixed1);

	std::cout << "Value of 1: " << fixed1.getRawBits () << std::endl;
	std::cout << "Value of 2: " << fixed2.getRawBits () << std::endl;
	fixed1.setRawBits (2);
	std::cout << "Value of 1: " << fixed1.getRawBits () << std::endl;
	std::cout << "Value of 2: " << fixed2.getRawBits () << std::endl;
	fixed2 = fixed1;
	std::cout << "Value of 1: " << fixed1.getRawBits () << std::endl;
	std::cout << "Value of 2: " << fixed2.getRawBits () << std::endl;
	return 0;
}
