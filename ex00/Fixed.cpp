#include "Fixed.hpp"

Fixed::Fixed ( void ) {

	this->_raw_value = 0;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	if ( this != &rhs )
		this->_raw_value = rhs._raw_value;
	return ( *this );
}

Fixed::Fixed ( Fixed const & src ) {

	*this = src;
}

Fixed::~Fixed ( void ) {

}

int	Fixed::getRawBits ( void ) const {

	return ( this->_raw_value );
}

void	Fixed::setRawBits ( int const raw ) {

	this->_raw_value = raw;
}

int const	Fixed::_fractional_bits = 8;
