#include "Fixed.hpp"

Fixed::Fixed (void) {

	this->_rawValue = 0;
}

Fixed::Fixed (int const integer) {

	this->_rawValue = integer << _fractionalBits;
}

Fixed::Fixed (float const fl) {

	this->_rawValue = roundf((fl * (1 << _fractionalBits)));
}

Fixed::Fixed (Fixed const & src) {

	*this = src;
}
