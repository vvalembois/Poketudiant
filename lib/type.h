#ifndef _TYPE_H
#define _TYPE_H

typedef enum{
	NOISY,LAZY,MOTIVATED,TEACHER
}type;

char * chaine_type(type t);

//compare 2 types (generations attaques)
int comparaison_type(type t1,type t2);

//dit si tel type est une faiblesse de l'autre
int faiblesse(type t1,type t2);
#endif
