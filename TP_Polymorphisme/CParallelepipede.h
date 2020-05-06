#pragma once
#include "CRectangle.h"

//commentaire : cf.CFigure.h
class CParallelepipede : public CRectangle
{
protected:
	double d_hauteur, d_x, d_y;
public:
	CParallelepipede(double hauteur, double largeur, double longueur, double x = 0, double y = 0) : CRectangle(largeur, longueur, x, y), d_hauteur(hauteur), d_x(x), d_y(y) {}
	~CParallelepipede() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

