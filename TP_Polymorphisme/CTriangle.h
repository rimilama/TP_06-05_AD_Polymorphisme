#pragma once
#include "CFigure.h"

//commentaire : cf.CFigure.h
class CTriangle : public CFigure 
{
protected:
	double d_base, d_hauteur;

public:
	CTriangle(double base, double hauteur, double x = 0, double y = 0): CFigure(x, y, 0), d_base(base), d_hauteur(hauteur){}
	~CTriangle() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

