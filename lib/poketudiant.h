#ifndef _POKETUDIANT_H
#define _POKETUDIANT_H

#include "poke.h"

#include "inventaire.h"
#include "attaque.h"

#define CONST_LEVEL 500

typedef struct Poketudiant{
	Poke pokemon;
	
	statistique stat_cur;
	
	attaque base;
	
	Inventaire inv;
	
	int pv;
	int lvl;
	
	int experience_cur;
	int experience_niveau_sup;
	
}Poketudiant;


//creer un poketudiant entre 2 niveau
Poketudiant * newPoketudiant(int borne1, int borne2);

//calcul l'exp pour le niveau suivant
int xp_next(int lvl);

//calcul la probabilite de capture
int probaCapture(int pv_eff , int pv_max);

//revoie 1 si on peut s'enfuir 
int fuite(int lvl_poke, int lvl_enemy);

#endif
