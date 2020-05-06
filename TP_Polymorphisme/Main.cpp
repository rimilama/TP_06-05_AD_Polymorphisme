#include <iostream>
#include <list>
#include <fstream>
#include <iomanip>

#include "CFigure.h"
#include "CTriangle.h"
#include "CCarre.h"
#include "CRectangle.h"
#include "CCercle.h"
#include "CCube.h"
#include "CSphere.h"
#include "CParallelepipede.h"

using namespace std;

int main() {

	//On crée une figure de chaque type et on affiche sa déscription courte et longue ainsi que son périmètre, aire et volume

	CTriangle triangle(5, 8);
	cout << triangle.description(courte) << endl; 
	cout << triangle.description(longue);
	cout << "Perimetre = " << triangle.perimetre() << endl; 
	cout << "Aire = " << triangle.aire() << endl;
	cout << "Volume = " << triangle.volume() << endl << endl;
	
	CCarre carre(4); 
	cout <<  carre.description(courte) << endl; 
	cout << carre.description(longue);
	cout << "Périmetre = " << carre.perimetre() << endl; 
	cout << "Aire = " << carre.aire() << endl;
	cout << "Volume = " << carre.volume() << endl << endl;
	
	CRectangle rectangle(5, 4);
	cout << rectangle.description(courte) << endl; 
	cout << rectangle.description(longue);
	cout << "Périmetre = " << rectangle.perimetre() << endl; 
	cout << "Aire = " << rectangle.aire() << endl;
	cout << "Volume = " << rectangle.volume() << endl << endl;
	
	CCercle cercle(2);
	cout << cercle.description(courte) << endl; 
	cout << cercle.description(longue);
	cout << "Périmetre = " << cercle.perimetre() << endl; 
	cout << "Aire = " << cercle.aire() << endl;
	cout << "Volume = " << cercle.volume() << endl << endl;
	
	CCube cube(6);
	cout << cube.description(courte) << endl; 
	cout << cube.description(longue);
	cout << "Périmetre = " << cube.perimetre() << endl; 
	cout << "Aire = " << cube.aire() << endl;
	cout << "Volume = " << cube.volume() << endl << endl;
	
	CParallelepipede parallelepipede(5, 4, 9);
	cout << parallelepipede.description(courte) << endl; 
	cout << parallelepipede.description(longue);
	cout << "Périmetre = " << parallelepipede.perimetre() << endl; 
	cout << "Aire = " << parallelepipede.aire() << endl;
	cout << "Volume = " << parallelepipede.volume() << endl << endl;
	
	CSphere sphere(3);
	cout << sphere.description(courte) << endl; 
	cout << sphere.description(longue);
	cout << "Périmetre = " << sphere.perimetre() << endl; 
	cout << "Aire = " << sphere.aire() << endl;
	cout << "Volume = " << sphere.volume() << endl << endl;

	//On crée toutes les variables necessaire pour l'écriture et la lecture des figures dans un fichier
	CFigure* figure;
	list<CFigure*> liste;
	list<CFigure*>::iterator iL;
	fstream* fichier = NULL;
	string strFigure;
	int n_x, n_y, n_z;
	double d_base, d_hauteur, d_largeur, d_longueur, d_rayon, d_x, d_y;

	//On insère toutes les figures dans une liste de figure
	liste.push_back(&triangle);
	liste.push_back(&carre);
	liste.push_back(&rectangle);
	liste.push_back(&cercle);
	liste.push_back(&cube);
	liste.push_back(&parallelepipede);
	liste.push_back(&sphere);

	fichier = new fstream("Figures.txt", fstream::out); //on ouvre le fichier Figure.txt ou on le crée et on l'ouvre si il n'existe pas
	//On écrit chaque figure dans le fichier avec son nom et toutes ses valeurs
	for (iL = liste.begin(); iL != liste.end(); iL++) {
		figure = *iL;
		*fichier << figure->description(courte) << " " << figure->toString() << endl;
	}
	fichier->close(); //On ferme le fichier une fois l'écriture fini
	delete fichier;

	fichier = new fstream("Figure.txt", fstream::in); //On ouvre en lecture le fichier Figure.txt
	//lecture et affichage des figures écrit dans le document de manière dynamique selon la figure car toutes les figures n'ont pas les mêmes attributs
	*fichier >> strFigure;
	while (!fichier->eof()) {
		*fichier >> n_x >> n_y >> n_z;
		cout << strFigure;
		cout << " " << n_x << " " << n_y << " " << n_z;
		if (strFigure == "Figure") {
			cout << endl;
		}
		if (strFigure == "Carré") {
			*fichier >> d_largeur;
			cout << " " << d_largeur << endl;
		}
		if (strFigure == "Rectangle") {
			*fichier >> d_largeur >> d_longueur;
			cout << " " << d_largeur << " " << d_longueur << endl;
		}
		if (strFigure == "Cercle") {
			*fichier >> d_rayon;
			cout << " " << d_rayon << endl;
		}
		if (strFigure == "Cube") {
			*fichier >> d_largeur;
			cout << " " << d_largeur << endl;
		}
		if (strFigure == "Parallelepipede") {
			*fichier >> d_largeur >> d_longueur >> d_hauteur >> d_x >> d_y;
			cout << " " << d_largeur << " " << d_longueur <<  " " << d_hauteur << " " << d_x << " " << d_y << endl;
		}
		if (strFigure == "Sphere") {
			*fichier >> d_rayon;
			cout << " " << d_rayon << endl;
		}
		while (fichier->get() != '\n');
		*fichier >> strFigure;
	}
	fichier->close(); //On ferme le fichier une fois la lecture fini
	delete fichier;

	return 0;
}