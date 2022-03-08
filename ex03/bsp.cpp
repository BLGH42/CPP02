#include "bsp.hpp"
#include "Point.hpp"
#include <limits.h>

Fixed	get_slope (Point p1, Point p2) {

	Fixed	deltaY;
	Fixed	deltaX;
	Fixed	slope;

	deltaY = p2.getY () - p1.getY ();
	deltaX = p2.getX () - p1.getX ();
	if (deltaX != 0)
		slope = deltaY / deltaX;
	else
		slope = INT_MAX;
	return (slope);
}

Fixed	get_originY (Point p, Fixed slope) {

	Fixed	originY;

	originY = p.getY () - (slope * p.getX ());	
	return (originY);
}

bool	is_on_line (Point p, Fixed slope, Fixed originY) {

	if (p.getY () == (slope * p.getX ()) + originY)
		return (true);
	return (false);
}

bool	is_on_edge (Point const a, Point const b, Point const point) {

	if (a.getX () <= b.getX () && point.getX () >= a.getX () && point.getX () <= b.getX ())
		return (true);
	if (a.getX () >= b.getX () && point.getX () <= a.getX () && point.getX () >= b.getX ())
		return (true);
	return (false);
}

bool	check_on_edge (Point const a, Point const b, Point const c, Point const point) {

	Fixed	slope1, slope2, slope3;
	Fixed	originY1, originY2, originY3;

	slope1 = get_slope (a, b);
	originY1 = get_originY (a, slope1);
	if (is_on_line (point, slope1, originY1)) {
		if (is_on_edge (a, b, point))
			return (true);
	}
	slope2 = get_slope (a, c);
	originY2 = get_originY (a, slope2);
	if (is_on_line (point, slope2, originY2)) {
		if (is_on_edge (a, c, point))
			return (true);
	}
	slope3 = get_slope (b, c);
	originY3 = get_originY (b, slope3);
	if (is_on_line (point, slope3, originY3)) {
		if (is_on_edge (b, c, point))
			return (true);
	}
	return (false);
}

Fixed sign (Point p1, Point p2, Point p3)
{
    return ((p1.getX () - p3.getX ()) * (p2.getY () - p3.getY ()) - (p2.getX () - p3.getX ()) * (p1.getY () - p3.getY ()));
}

bool	check_in_triangle (Point const a, Point const b, Point const c, Point const point) {

    bool 	has_neg, has_pos;
	Fixed	d1, d2, d3;

    d1 = sign (point, a, b);
    d2 = sign (point, b, c);
    d3 = sign (point, c, a);
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(has_neg && has_pos);
}

bool	bsp (Point const a, Point const b, Point const c, Point const point) {

	bool	in_triangle;
	bool	on_edge;

	in_triangle = check_in_triangle (a, b, c, point);
	on_edge = check_on_edge (a, b, c, point);
	return (in_triangle && !on_edge);
}
