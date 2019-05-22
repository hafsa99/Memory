#include <stdlib.h>
#include <stdio.h>
#include <libsx.h>
#include "cartes.h"

void initValeur(Carte *c,int n){
	c->valeur = n;
}
void initEtat(Carte *c){
	c->etat = 0;
}
void changerEtat(Carte *c){
	if (c->etat == 0)c->etat = 1;
	else c->etat = 0;
}