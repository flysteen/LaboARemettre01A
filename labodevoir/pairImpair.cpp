//But : Écrire un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair d’un entier impair.
//Auteur : Rafael Witty 
//Date : 2020-09-13

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	//Déclaration des variables
	int nombre1;
	//ce qu'on dit à l'ordi de demander a l'utilisateur.
	cout << "Veuiller entrer un nombre entier : ";

	cin >> nombre1;
	//On utilise le modulo de 2 pour savoir si un nombre entier est pair ou impair
	if (nombre1 % 2 == 0)
	{
		cout << nombre1 << " est un nombre pair ";
	}
	
	else
	{
		cout << nombre1 << " est un nombre impair ";
	}
	return 0;
}

	//plan de test
	/*
	nombre entier                      résultat escompté:
	4                                  4 est un nombre pair
	8                                  8 est un nombre pair
	7                                  7 est un nombre impair
	16                                 16 est un nombre pair
	21                                 21 est un nombre impair	
	
*/