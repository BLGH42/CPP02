#include "Fixed.hpp"

Fixed::~Fixed ( void ) {

}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	if ( this != &rhs )
		this->_rawValue = rhs._rawValue;
	return ( *this );
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

std::ostream & operator<<(std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat ();
	return (o);
}

int const	Fixed::_fractionalBits = 8;
