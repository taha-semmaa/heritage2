// heritage2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Tableau.h"
#include "TableauBorn.h"
using namespace std;
int main()
{
	Tableau T1(5);
	//Tableau T2(T1);
	T1.afficher();
	float val;
	val=T1[1];
	cout << "deuxieme afficher" << endl;
	T1.afficher();
	TableauBorn TAB(4, 2.4, 7.8);
	TAB.afficher();
	val=TAB[1];
	cout << "deuxieme afficher" << endl;
	TAB.afficher();
	TAB(1, 4.6);
	TAB.afficher();
	
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
