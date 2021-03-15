#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "polynome.h"


poly_t* polynome_new( unsigned int degre ) {
	poly_t* P ;
	P = (poly_t*) malloc( sizeof(poly_t) ) ;
	if ( P == NULL ) {
		printf("Malloc failed \n") ;
		return NULL ;
	}
	P->deg = degre ;
	P->coeffs = (double*) malloc( (degre+1)*sizeof(double)) ;
	return P ; 
}

void polynome_free( poly_t* P ) {
	free( P->coeffs ) ;
	free(P) ;
}

void polynome_scanf( poly_t* P ) {
	int i ;
	for ( i=0; i<=P->deg; i++ ) {
		printf("Coefficient de x^%d ?", i ) ;
		scanf("%lf", &(P->coeffs[i])) ;
	}
}

void polynome_affiche( poly_t* P ) {
	int i ;
	for (i=0; i<=P->deg; i++ ) {
		printf("%lf * x ^ %d", P->coeffs[i], i ) ;
		if ( i != P->deg )
			printf(" + ") ;
	}
	printf("\n") ;
}

void calculDelta(double *delta,poly_t* P) {
	if (P->deg==2) {
		*delta = pow(P->coeffs[1],2) - 4*P->coeffs[2]*P->coeffs[0];	
	}
	else {
		printf("Erreur du calcul de delta, Polynome degree 2 seulement\n");
	}

}

void calculRacine(double *delta,poly_t* P) {
	if (P->deg==2) {

		if (*delta==0) {
			double x0;
			x0= ( -P->coeffs[1] ) / (2 * P->coeffs[2]);
			printf("1 seule racine x0 = %lf \n",x0);
		}
		if (*delta>0) {
			double x1; double x2;
			x1= ( -P->coeffs[1] + (sqrt(*delta)) ) / ( 2 * P->coeffs[0]);
			x2= ( -P->coeffs[1] - sqrt( *delta ) ) / ( 2 * P->coeffs[0]);
			printf("2 racines, x1 = %lf , x2 = %lf \n",x1,x2);
		}
		if (*delta<0) {
		printf("Work on progress\n");
		}

	}
	printf("erreur de degre\n");	
}
