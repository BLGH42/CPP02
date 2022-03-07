#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <limits.h>
#include <cmath>

class	Fixed {

	public:

		Fixed	( void );
		Fixed	( int const integer );
		Fixed	( float const fl );
		Fixed &	operator=( Fixed const & rhs );
		Fixed	operator+( Fixed const & rhs );
		Fixed	operator-( Fixed const & rhs );
		Fixed	operator*( Fixed const & rhs );
		Fixed	operator/( Fixed const & rhs );
		Fixed 	operator++( int );
		Fixed	operator++( void );
		bool	operator<( Fixed const & rhs );
		bool	operator>( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );
		Fixed	( Fixed const & src );
		~Fixed	( void );

		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );
		int		toInt ( void ) const;
		float	toFloat ( void ) const;

	private:

		int					_rawValue;
		static int const	_fractionalBits;
};

	std::ostream & operator<<(std::ostream & o, Fixed const & rhs );
#endif
