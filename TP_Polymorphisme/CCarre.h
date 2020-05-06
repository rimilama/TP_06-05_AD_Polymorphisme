#pragma once
#include "CFigure.h"

//commentaire : cf.CFigure.h
class CCarre : public CFigure
{
protected:
	double d_largeur;

public:
	CCarre(double largeur, double x = 0, double y = 0): CFigure(x, y, 0), d_largeur(largeur) {}
	~CCarre() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

