#include <iostream>
#include "TableauBorn.h"
#include "Tableau.h"
using namespace std;
TableauBorn::TableauBorn(int nbr_el, float inf,float sup):Tableau(nbr_el)
{
	cout << "appel au constructeur de la classe TableauBorn" << endl;
	this->Born_Inf = inf;
	this->Born_Sup = sup; 
}

void TableauBorn::afficher() const
{
	cout << "l'affichage por la classe TableauBorne" <<  endl;
	for (int i = 0; i < this->NBR_ELE; i++)
		cout << this->tab[i] << endl;
}

float TableauBorn::operator[](int i)
{
	bool rep;
	float val;
	cout << "si vou voulez modifiez la valeur entrer 1 sinon 0" << endl;
	cin >> rep;
	if (rep == 1)
	{
		cout << "entrer la nouvelle valeur pour la classe Table" << endl;
		cout << "entrer la nouvelle valeur pour la claclasse TableBorne" << endl;
		cin >> val;
		if (val >= this->Born_Inf && val <= this->Born_Sup && i <= this->NBR_ELE)
		{
			this->tab[i] = val;
			cout << "modification pour la classe TableBorn avecsuccées" << endl;
		}
		cout << "modification de class Tableau avec succées" << endl;
	}
	return this->tab[i];
	
}

TableauBorn::~TableauBorn()
{
	cout << "destructeur de la classe TableauBorn" << endl;
}

void TableauBorn::operator()(int ind, float VAL)
{
	if (ind <= this->NBR_ELE && VAL >= this->Born_Inf && VAL <= this->Born_Sup)
	{
		this->tab[ind] = VAL;
		cout << "modification pour la classe TableBorn avecsuccées" << endl;
	}
	else
	{
		cout << "modification invalid" << endl;
	}
}
