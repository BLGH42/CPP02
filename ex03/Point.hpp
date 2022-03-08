#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {

	public:

		Point (void);
		Point (Fixed const f1, Fixed const f2);
		Point (Point const & src);
		~Point (void);

		void operator= (Point const & rhs);

		Fixed	getX (void) const;
		Fixed	getY (void) const;

	private:

		Fixed const	_x;
		Fixed const	_y;
};

#endif
