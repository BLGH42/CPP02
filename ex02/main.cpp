#include "Fixed.hpp"

int	main ( void ) {

	Fixed 	a ( 7.3535f );
	Fixed 	b ( 12.89123123f );


	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "Minimum is: " << a.min ( a, b ) << std::endl;
	std::cout << "Maximum is: " << a.max ( a, b ) << std::endl;
	std::cout << "False statements are: ";
	if ( a == b || a > b || a >= b )
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << "True statements are: ";
	if ( a != b && a < b && a <= b )
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << "Pre-incremented a = " << ++a << std::endl;
	std::cout << "Post-incremented a from " << a++ << " to " << a << std::endl;
	return 0;
}
