#ifndef POLYNOME_H
#define POLYNOME_H


typedef struct {
	unsigned int deg ;
	double * coeffs ;
} poly_t ;


poly_t* polynome_new( unsigned int ) ; 
void polynome_free( poly_t* ) ;

void polynome_scanf( poly_t* ) ;
void polynome_affiche( poly_t* ) ;
void calculDelta(double*, poly_t* );
void calculRacine(double*, poly_t* );
#endif
