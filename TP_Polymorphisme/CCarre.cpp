#include "CCarre.h"

double CCarre::perimetre()
{
	return 4*d_largeur;
}

double CCarre::aire()
{
	return d_largeur*d_largeur;
}

double CCarre::volume()
{
	return 0.0;
}

string CCarre::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Carré";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Carré\n";
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

string CCarre::toString()
{
	ostringstream oss;
	oss << d_largeur;
	return CFigure::toString() + " " + oss.str();
}
