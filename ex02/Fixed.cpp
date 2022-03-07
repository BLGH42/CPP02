#include "Fixed.hpp"

Fixed::~Fixed ( void ) {

}

int	Fixed::getRawBits ( void ) const {

	return ( this->_rawValue );
}

void	Fixed::setRawBits ( int const raw ) {

	this->_rawValue = raw;
}

int	Fixed::toInt ( void ) const {

	return (this->_rawValue >> _fractionalBits);
}

float	Fixed::toFloat ( void ) const {

	return ((float)this->_rawValue / (float)(1 << _fractionalBits));
}

int const	Fixed::_fractionalBits = 8;
