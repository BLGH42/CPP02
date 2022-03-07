#include "Fixed.hpp"

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_rawValue = rhs._rawValue;
	return ( *this );
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat ();
	return (o);
}
