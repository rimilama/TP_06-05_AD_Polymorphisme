#include "CCercle.h"

double CCercle::perimetre()
{
	return 2*PI*d_rayon;
}

double CCercle::aire()
{
	return PI*d_rayon*d_rayon;
}

double CCercle::volume()
{
	return 0.0;
}

string CCercle::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Cercle";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Cercle\n";
		desc += "{\n";
		desc += "\tx = "; oss << centre_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << centre_y; desc += oss.str() + "\n";
		desc += "\tz = "; oss.str(""); oss << centre_z; desc += oss.str() + "\n";
		desc += "\trayon = "; oss.str(""); oss << d_rayon; desc += oss.str() + "\n";
		desc += "}\n";
	}
	else {
		desc = "";
	}
	return desc;
}

string CCercle::toString()
{
	ostringstream oss;
	oss << d_rayon;
	return CFigure::toString() + " " + oss.str();
}
