#ifndef _POKE_H
#define _POKE_H

#define NB_VARIETE 10

#include "type.h"
#include "variete.h"

typedef struct statistique{
	int att;
	int defense;
	int pv_max_poke;
}statistique;

typedef struct Poke{
	variete nom;
	type spe;
	int capturable;
	variete evolution;
	statistique stat_base;
}Poke;

Poke newPoke(variete v);

#endif
