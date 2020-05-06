#pragma once
#include "CFigure.h"

//commentaire : cf.CFigure.h
class CRectangle : public CFigure
{
protected:
	double d_largeur, d_longueur;

public:
	CRectangle(double largeur, double longueur, double x = 0, double y = 0) : CFigure(x, y, 0), d_largeur(largeur), d_longueur(longueur) {}
	~CRectangle() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

