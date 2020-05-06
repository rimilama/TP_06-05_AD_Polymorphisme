#include "CFigure.h"

string CFigure::description(t_desc type)
{
	return "Figure";
}

string CFigure::toString() {
	ostringstream oss;
	oss << centre_x << " " << centre_y << " " << centre_z;
	return oss.str();
}