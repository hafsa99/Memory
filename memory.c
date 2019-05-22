#include <stdlib.h>
#include <stdio.h>
#include <libsx.h>
//#include "cartes.h"

typedef struct{
	Widget bouton;
	int valeur;
	int etat;
} Carte;

int main(int argc, char const *argv[])
{
	Carte c1;
	Carte c2;
	Carte c3;
	Carte c4;

	c1.valeur = 0;
	c2.valeur = 0;
	c3.valeur = 1;
	c4.valeur = 1;

	c1.etat = 0;
	c2.etat = 0;
	c3.etat = 0;
	c4.etat = 0;


	return EXIT_SUCCESS;
}