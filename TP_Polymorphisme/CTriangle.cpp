#include "CTriangle.h"

double CTriangle::perimetre()
{
	return sqrt(d_base*d_base + d_hauteur*d_hauteur) + d_base + d_hauteur;
}

double CTriangle::aire()
{
	return d_base*d_hauteur/2;
}

double CTriangle::volume()
{
	return 0.0;
}

string CTriangle::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Triangle";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Triangle\n";
		desc += "{\n";
		desc += "\tx = "; oss << centre_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << centre_y; desc += oss.str() + "\n";
		desc += "\tz = "; oss.str(""); oss << centre_z; desc += oss.str() + "\n";
		desc += "\tbase = "; oss.str(""); oss << d_base; desc += oss.str() + "\n";
		desc += "\thauteur = "; oss.str(""); oss << d_hauteur; desc += oss.str() + "\n";
		desc += "}\n";
	}
	else {
		desc = "";
	}
	return desc;
}

string CTriangle::toString()
{
	ostringstream oss;
	oss << d_base << " " << d_hauteur;
	return CFigure::toString() + " " + oss.str();
}
