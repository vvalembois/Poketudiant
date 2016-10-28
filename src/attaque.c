#include <stdlib.h>
#include <stdio.h>

#include "../lib/globale.h"
#include "../lib/attaque.h"

attaque tab_attaque[NB_ATTACK]={
	{"BAVARDAGE",NOISY,10},
	{"GROBOUCAN",NOISY,15},
	{"MEGAPHONE-VOCAL",NOISY,20},
	{"BAILLEMENT",LAZY,10},
	{"PTI'SOMME",LAZY,15},
	{"SUPERDODO",LAZY,20},
	{"OBOULO",MOTIVATED,10},
	{"EXO-MAISON",MOTIVATED,15},
	{"MAX-REVIZ",MOTIVATED,20},
	{"TIT'QUESTION",TEACHER,10},
	{"POSER-COLLE",TEACHER,15},
	{"FATAL-INTERRO",TEACHER,20}
};

//retourne un tab de 2 attaque pour le pokemon
attaque * recupAttaque(type t){
	attaque tab[N_ATTACK];
	attaque tmp;
	int indice;
	for(int i=0;i<N_ATTACK;i++){
		indice=myrand(0,NB_ATTACK);
		tmp=tab_attaque[indice];
		if(i==0){
			if(!comparaisontype(tmp.t,t))
				i--;
		}
		else{
			if(comparaisontype(tmp.t,t))
				i--;
		}
		tab[i]=tmp;
	}
	return tab;
} 

//renvoie les dommages d'une attaque 
int domageattaque(int k,int att_attack,int def_defender,int power){
	return (k*(att_attack/def_defender)*power);
}
