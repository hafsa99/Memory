#pragma once

#include <libsx.h>

typedef struct{
	Widget bouton;
	int valeur;
	int etat;
} Carte;

extern void initValeur(Carte *c,int n);
extern void initEtat(Carte *c);
extern void changerEtat(Carte *c);