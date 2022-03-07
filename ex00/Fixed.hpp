#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {

	public:

		Fixed ( void );
		Fixed ( Fixed const & src );
		Fixed & operator=( Fixed const & rhs );
		~Fixed ( void );

		int	getRawBits ( void ) const;
		void	setRawBits ( int const raw );

	private:

		int					_raw_value;
		static int const	_fractional_bits;
};

#endif
