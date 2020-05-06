#include "CRectangle.h"

double CRectangle::perimetre()
{
	return 2*d_largeur + 2*d_longueur;
}

double CRectangle::aire()
{
	return d_largeur*d_longueur;
}

double CRectangle::volume()
{
	return 0.0;
}

string CRectangle::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Rectangle";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Rectangle\n";
		desc += "{\n";
		desc += "\tx = "; oss << centre_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << centre_y; desc += oss.str() + "\n";
		desc += "\tz = "; oss.str(""); oss << centre_z; desc += oss.str() + "\n";
		desc += "\tlargeur = "; oss.str(""); oss << d_largeur; desc += oss.str() + "\n";
		desc += "\tlongueur = "; oss.str(""); oss << d_longueur; desc += oss.str() + "\n";
		desc += "}\n";
	}
	else {
		desc = "";
	}
	return desc;
}

string CRectangle::toString()
{
	ostringstream oss;
	oss << d_largeur << " " << d_longueur;
	return CFigure::toString() + " " + oss.str();
}
