#include <stdlib.h>
#include <stdio.h>

#include "../lib/sac.h"

Sac initsac(){
	Sac s;
	s.cur=0;
	s.p1=0;
	for(int i=0;i<TAILLE_SAC;i++)
		s.p[i]=(Poketudiant *)malloc(sizeof(Poketudiant));
	return s;
}

//ajout un pokemon dans le sac
void ajout_sac(Sac * s,Poketudiant p){
	
}

//change la valeur de cur en combat
void changerPrem(Sac * s);

//recup le premier poketudiant 
Poketudiant recupPremier(Sac * s);

//supprime  poketudiant a l'indice i
void supprimierPoke_sac(Sac * s,int i);

//inverse les positions de deux poketudiant dans le tab
void switch_sac(Sac * s,int i,int j);

//renvoie si le sac est remplis 
int remplisSac(Sac sac){
	return (sac.cur==TAILLE_SAC);
}