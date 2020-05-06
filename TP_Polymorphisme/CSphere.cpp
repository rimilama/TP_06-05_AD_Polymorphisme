#include "CSphere.h"

double CSphere::perimetre()
{
	return 0.0;
}

double CSphere::aire()
{
	return 4*PI*d_rayon*d_rayon;
}

double CSphere::volume()
{
	return (4*PI*pow(d_rayon,3))/3;
}

string CSphere::description(t_desc type)
{
	string desc;
	if (type == courte) {
		desc = "Sphere";
	}
	else if (type == longue) {
		ostringstream oss;
		desc = CFigure::description(type) + "<- Sphere\n";
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

string CSphere::toString()
{
	return CCercle::toString();
}
