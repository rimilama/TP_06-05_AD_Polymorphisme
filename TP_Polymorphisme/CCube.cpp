#include "CCube.h"

double CCube::perimetre()
{
	return 0.0;
}

double CCube::aire()
{
	return d_largeur*d_largeur*6;
}

double CCube::volume()
{
	return d_largeur*d_largeur*d_largeur;
}

string CCube::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Cube";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Cube\n";
		desc += "{\n";
		desc += "\tx = "; oss << centre_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << centre_y; desc += oss.str() + "\n";
		desc += "\tz = "; oss.str(""); oss << centre_z; desc += oss.str() + "\n";
		desc += "\tlargeur = "; oss.str(""); oss << d_largeur; desc += oss.str() + "\n";
		desc += "}\n";
	}
	else {
		desc = "";
	}
	return desc;
}

string CCube::toString()
{
	return CCarre::toString();
}
