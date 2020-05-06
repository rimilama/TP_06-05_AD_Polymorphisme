#pragma once
#include "CFigure.h"
#define PI 3.141592 //On d�fini ici PI pour une utilisation dans les formules math�matique

//commentaire : cf.CFigure.h
class CCercle : public CFigure
{
protected:
	double d_rayon;

public:
	CCercle(double rayon, double x = 0, double y = 0) : CFigure(x, y, 0), d_rayon(rayon) {}
	~CCercle() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

