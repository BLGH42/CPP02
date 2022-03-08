#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed {

	public:

		Fixed	(void);
		Fixed	(int const integer);
		Fixed	(float const fl);
		Fixed	(Fixed const & src);
		~Fixed	(void);

		Fixed &	operator= (Fixed const & rhs);
		Fixed	operator+ (Fixed const & rhs);
		Fixed	operator- (Fixed const & rhs);
		Fixed	operator* (Fixed const & rhs);
		Fixed	operator/ (Fixed const & rhs);
		Fixed 	operator++ (int);
		Fixed	operator++ (void);
		Fixed 	operator-- (int);
		Fixed	operator-- (void);
		bool	operator< (Fixed const & rhs);
		bool	operator> (Fixed const & rhs);
		bool	operator>= (Fixed const & rhs);
		bool	operator<= (Fixed const & rhs);
		bool	operator== (Fixed const & rhs);
		bool	operator!= (Fixed const & rhs);

		static Fixed const &	min (Fixed const & a, Fixed const & b);
		static Fixed const &	max (Fixed const & a, Fixed const & b);
		static Fixed &			min (Fixed & a, Fixed & b);
		static Fixed &			max (Fixed & a, Fixed & b);

		int		getRawBits (void) const;
		void	setRawBits (int const raw);
		int		toInt (void) const;
		float	toFloat (void) const;

	private:

		int					_rawValue;
		static int const	_fractionalBits;
};

	std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
