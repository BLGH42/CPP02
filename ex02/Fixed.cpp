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

	return ( this->_rawValue >> _fractionalBits );
}

float	Fixed::toFloat ( void ) const {

	return ( (float)this->_rawValue / (float)( 1 << _fractionalBits ) );
}

Fixed const &	Fixed::min ( Fixed const & a, Fixed const & b ) {

	if ( a._rawValue < b._rawValue )
		return ( a );
	return ( b );
}

Fixed const &	Fixed::max ( Fixed const & a, Fixed const & b ) {

	if ( a._rawValue > b._rawValue )
		return ( a );
	return ( b );
}

Fixed &	Fixed::min ( Fixed & a, Fixed & b ) {

	if ( a._rawValue < b._rawValue )
		return ( a );
	return ( b );
}

Fixed &	Fixed::max ( Fixed & a, Fixed & b ) {

	if ( a._rawValue > b._rawValue )
		return ( a );
	return ( b );
}

int const	Fixed::_fractionalBits = 8;
