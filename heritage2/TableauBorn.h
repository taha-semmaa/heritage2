#pragma once
#include "Tableau.h"
class TableauBorn :public Tableau
{
private:
	float Born_Inf, Born_Sup;
public:
	TableauBorn(int, float, float);
	virtual void afficher()const;
	virtual float operator[](int);
	~TableauBorn();
	void operator()(int, float);
};

