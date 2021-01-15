#pragma once
class Tableau
{
protected:
	float* tab;
	int NBR_ELE;
public:
	Tableau(int);
	~Tableau();
	virtual void afficher()const;
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	virtual float operator[](int);


};

