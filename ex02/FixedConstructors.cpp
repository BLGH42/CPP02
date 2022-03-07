#include "Fixed.hpp"

Fixed::Fixed ( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_rawValue = 0;
}

Fixed::Fixed ( int const integer ) {

	std::cout << "Int constructor called" << std::endl;
	this->_rawValue = integer << _fractionalBits;
}

Fixed::Fixed ( float const fl ) {

	std::cout << "Float constructor called" << std::endl;
	this->_rawValue = roundf((fl * (1 << _fractionalBits)));
}

Fixed::Fixed ( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
