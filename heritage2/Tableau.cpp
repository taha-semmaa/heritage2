#include "Tableau.h"
#include <iostream>
using namespace std;
Tableau::Tableau(int NBR)
{
	cout << "constructeur de class Tableau avec parametre" << endl;
	this->NBR_ELE = NBR;
	this->tab = new float[this->NBR_ELE];
	for (int i = 0; i < this->NBR_ELE; i++)
		this->tab[i] = 0;
}

Tableau::~Tableau()
{
	cout << "destructeur de la classe Tableau " << endl;
	if (this->tab != NULL)
		delete[] this->tab;
}

void Tableau::afficher() const
{
	cout << "l'affichage pour la classe Tableau" << endl;
	for (int i = 0; i < this->NBR_ELE; i++)
		cout << this->tab[i] << endl;
}

Tableau::Tableau(const Tableau& T)
{
	this->NBR_ELE = T.NBR_ELE;
	this->tab = new float[this->NBR_ELE];
	for (int i = 0; i < this->NBR_ELE; i++)
		this->tab[i] = T.tab[i];
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T)
	{
		this->NBR_ELE = T.NBR_ELE;
		this->tab = new float[this->NBR_ELE];
		for (int i = 0; i < this->NBR_ELE; i++)
			this->tab[i] = T.tab[i];
	}
	return *this;
}

float Tableau::operator[](int i)
{
	bool rep;
	cout << "si vou voulez modifiez la valeur entrer 1 sinon 0" << endl;
	cin >> rep;
	if(rep==1)
	{
		cout << "entrer la nouvelle valeur pour la classe Table" << endl;
		cin >> this->tab[i];
		cout << "modification de class Tableau avec succées" << endl;
	}
	return this->tab[i];
}
