#include <stdio.h>
#include <math.h>

#include "polynome.h"



int main() {

	poly_t* monpoly ;
	int degre ;
	char poubelle[200] ;
	
	int r ;
	do { 
		printf("Degre ?\n") ;
		r = scanf("%d", &degre ) ;
		if ( r != 1 )
			scanf("%s", poubelle ) ;
	} while ( r != 1 ) ;

	monpoly = polynome_new( degre ) ;

	polynome_scanf( monpoly) ;	
	polynome_affiche( monpoly ) ;
	
	double delta;
	calculDelta( &delta,monpoly ) ;
	if (monpoly->deg == 2 ) {
	printf("valeur de delta : %lf\n",delta) ;
	calculRacine( &delta,monpoly);
	}


	polynome_free( monpoly ) ;

	return 0 ;
}

