// but : Écrivez un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
//5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
//deuxième chiffre sur la deuxième ligne, ainsi de suite.
// auteur : Rafael Witty
// date : 2020-09-13

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//Declaration des variables
	int nombre1;
	int temp;
	// boolean pour determiner si un nombre est negatif initialement
	bool estNegatif = false;
	
	cout << "Veuiller entrer un nombre entier à 5 chiffres : ";
	
	cin >> nombre1;
	// Verifier si le nombre est negatif
	if (nombre1 < 0)
	{
		// Enlever la portion negative
		nombre1 *= -1;
		estNegatif = true;
	}

	//Nombre a 5 chiffres possibles

	if (nombre1 >= 10000 && nombre1 <= 99999)
	{
		/*Logique derriere les operations:
		On veut que le chiffre a afficher soit le dernier afin d'utiliser un modulo 10 pour afficher l'unite*/

		// Si est negatif
		if (estNegatif)
		{
			//Affichage de dizaine de milier
			temp = nombre1 / 10000 *-1;
			cout << temp << endl;
		}
		// Si n'est pas negatif
		else {
			temp = nombre1 / 10000;
			cout << temp << endl;
		}

		//Affichage des miliers
		temp = nombre1 / 1000;
		cout << temp % 10 << endl;

		//Affichage des centaines
		temp = nombre1 / 100;
		cout << temp % 10 << endl;

		//Affichage des dizaines
		temp = nombre1 / 10;
		cout << temp % 10 << endl;

		//Affichage des unites
		cout << nombre1 % 10 << endl;


	}
	else
	{
		cout << nombre1 << "Ce nombre ne contient pas 5 chiffres.";
	}

	return 0;
}

/*
Plan de test:
note:l'affichage escompté ne prend pas en comte: Veuiller entrer un nombre entier à 5 chiffres :
	nombre entier                      résultat escompté:
	-43243									-4
											 3
											 2
											 4
											 3
	
	10000									 1
											 0
											 0
											 0
											 0

	99999									9
											9
											9
											9
											9
											
	100430								Ce nombre ne contient pas 5 chiffres.
	-9999								Ce nombre ne contient pas 5 chiffres.



*/
