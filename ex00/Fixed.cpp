#include "Fixed.hpp"

Fixed::Fixed ( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_raw_value = 0;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_raw_value = rhs._raw_value;
	return ( *this );
}

Fixed::Fixed ( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits ( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_raw_value );
}

void	Fixed::setRawBits ( int const raw ) {

	this->_raw_value = raw;
}

int const	Fixed::_fractional_bits = 8;
