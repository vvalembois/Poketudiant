#ifndef _VARIETE_H
#define _VARIETE_H

typedef enum{
	PARLFOR,ISMAR,RIGOLAMOR,PROCRASTINO,COUCHTAR,NUIDEBOU,BUCHAFON,BELMENTION,PROMOMAJOR,ENSEIGNANT_DRESSEUR,NO_EVOLUTION
}variete;

char * chaine_variete(variete ele);

variete recup_variete(char * chaine);

#endif
