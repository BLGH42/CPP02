#include "Fixed.hpp"

Fixed &	Fixed::operator= ( Fixed const & rhs ) {

	if ( this != &rhs )
		this->_rawValue = rhs._rawValue;
	return ( *this );
}

Fixed	Fixed::operator+ ( Fixed const & rhs ) {

	Fixed	 addition;

	addition._rawValue = this->_rawValue + rhs._rawValue;
	return ( addition );
}

Fixed	Fixed::operator- ( Fixed const & rhs ) {

	Fixed	substraction;

	substraction._rawValue = this->_rawValue - rhs._rawValue;
	return ( substraction );
}

Fixed	Fixed::operator* ( Fixed const & rhs ) {

	Fixed	multiplication;

	multiplication._rawValue = ( this->_rawValue * rhs._rawValue ) / ( 1 << _fractionalBits );
	return ( multiplication );
}

Fixed	Fixed::operator/ ( Fixed const & rhs ) {

	Fixed	division;

	division._rawValue = ( this->_rawValue * ( 1 << _fractionalBits )) / rhs._rawValue;
	return ( division );
}

bool	Fixed::operator< ( Fixed const & rhs ) {

	if ( this->_rawValue < rhs._rawValue )
		return ( true );
	return ( false );
}

bool	Fixed::operator> ( Fixed const & rhs ) {

	if ( this->_rawValue > rhs._rawValue )
		return ( true );
	return ( false );
}

bool	Fixed::operator>= ( Fixed const & rhs ) {

	if ( this->_rawValue >= rhs._rawValue )
		return ( true );
	return ( false );
}

bool	Fixed::operator<= ( Fixed const & rhs ) {

	if ( this->_rawValue <= rhs._rawValue )
		return ( true );
	return ( false );
}

bool	Fixed::operator== ( Fixed const & rhs ) {

	if ( this->_rawValue == rhs._rawValue )
		return ( true );
	return ( false );
}

bool	Fixed::operator!= ( Fixed const & rhs ) {

	if ( this->_rawValue != rhs._rawValue )
		return ( true );
	return ( false );
}

Fixed	Fixed::operator++ ( void ) {

	this->_rawValue++;
	return ( *this );
}

Fixed 	Fixed::operator++ ( int ) {

	Fixed	original = *this;

	++( *this );
	return ( original );
}

Fixed	Fixed::operator-- ( void ) {

	this->_rawValue--;
	return ( *this );
}

Fixed	Fixed::operator-- ( int ) {

	Fixed	original = *this;

	--( *this );
	return ( original );
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat ();
	return ( o );
}
