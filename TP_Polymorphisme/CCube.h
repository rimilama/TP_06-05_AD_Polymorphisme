#pragma once
#include "CCarre.h"

//commentaire : cf.CFigure.h
class CCube : public CCarre
{
public: 
	CCube(double largeur, double x = 0, double y = 0) : CCarre(largeur, 0, 0){}
	~CCube() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

