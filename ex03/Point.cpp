#include "Point.hpp"
#include "Fixed.hpp"

Point::Point (void) : _x(0), _y(0) {

}

Point::Point (Fixed const f1, Fixed const f2) : _x(f1), _y(f2) {

}

void Point::operator= (Point const & src) {

	(void)src;
	std::cout << "All the attributes are private lol\n";
}

Point::Point (Point const & src) : _x(src._x), _y(src._y ) {

}

Point::~Point (void) {

}

Fixed	Point::getX (void) const {

	return (this->_x);
}

Fixed	Point::getY (void) const {

	return (this->_y);
}
