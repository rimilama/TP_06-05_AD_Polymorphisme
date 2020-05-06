#include "CParallelepipede.h"

double CParallelepipede::perimetre()
{
	return 0.0;
}

double CParallelepipede::aire()
{
	return 2*d_hauteur*d_largeur + 2*d_hauteur*d_longueur + 2*d_largeur*d_longueur;
}

double CParallelepipede::volume()
{
	return d_largeur*d_longueur*d_hauteur;
}

string CParallelepipede::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Parallelepipede";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Parallelepipede\n";
		desc += "{\n";
		desc += "\tx = "; oss << centre_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << centre_y; desc += oss.str() + "\n";
		desc += "\tz = "; oss.str(""); oss << centre_z; desc += oss.str() + "\n";
		desc += "\tlongueur = "; oss.str(""); oss << d_longueur; desc += oss.str() + "\n";
		desc += "\tlargeur = "; oss.str(""); oss << d_largeur; desc += oss.str() + "\n";
		desc += "\thauteur = "; oss.str(""); oss << d_hauteur; desc += oss.str() + "\n";
		desc += "\tx = "; oss.str(""); oss << d_x; desc += oss.str() + "\n";
		desc += "\ty = "; oss.str(""); oss << d_y; desc += oss.str() + "\n";
		desc += "}\n";
	}
	else {
		desc = "";
	}
	return desc;
}

string CParallelepipede::toString()
{
	ostringstream oss;
	oss << d_hauteur << d_x << d_y;
	return CRectangle::toString() + " " + oss.str();
}
