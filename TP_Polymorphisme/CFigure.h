#pragma once
#include <iostream>
#include <sstream>

using namespace std;
typedef enum {courte, longue} t_desc;

class CFigure
{
protected:
	double centre_x, centre_y, centre_z;

public:
	CFigure(double x = 0.0, double y=0.0, double z=0.0): centre_x(x), centre_y(y), centre_z(z){}
	virtual ~CFigure(){}
	virtual double perimetre() = 0; //calculera le périmètre de la figure (sera égal à 0 si la figure n'a pas de périmètre)
	virtual double aire() = 0; //calculera l'aire de la figure
	virtual double volume() = 0; //calculera le volume de la figure (sera égal à 0 si la figure n'a pas de volume)
	virtual string description(t_desc type); //affichera la description de la figure -- courte ou longue selon ce qui est mit en paramètre
	virtual string toString(); //affiche l'ensemble des argument de la figure
};

