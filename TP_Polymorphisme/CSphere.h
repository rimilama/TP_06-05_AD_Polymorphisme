#pragma once
#include "CCercle.h"

//commentaire : cf.CFigure.h
class CSphere : public CCercle
{
public:
	CSphere(double rayon, double x = 0, double y = 0) : CCercle(rayon, 0, 0) {}
	~CSphere() {}
	double perimetre();
	double aire();
	double volume();
	string description(t_desc type);
	string toString();
};

