#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int	main (void) {

	Point const	v1 (0, 3);
	Point const	v2 (-3, -3);
	Point const	v3 (3, -3);
	Point const	point (0, 0);

	if (bsp (v1, v2, v3, point))
		std::cout << "In\n";
	else
		std::cout << "Out\n";
	return 0;
}
