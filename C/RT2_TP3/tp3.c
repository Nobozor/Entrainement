#include <stdio.h>
#include <math.h>

//// STRUCT
struct complex_t
{
	double reel;
	double imag;
};

typedef struct complex_t complex;


//// COMPLEX REAL ET IMAGINAIRE 

double complex_real(complex z ) 
{
	double a;
	a=z.reel;
	printf("reel = %lf\n",a);
	return a;
}

double complex_img(complex z )
{
	double b;
	b=z.imag;
	printf("imag = %lf\n",b);
	return b;
}

//// COMPLEX ADD ! 

int complex_add(complex *T,complex z, complex zi)
{	
	(*T).reel = z.reel+zi.reel;
	(*T).imag = z.imag+zi.imag;
	return 0;
}

//// COMPLEX SUB ! 

int complex_sub(complex *T,complex z, complex zi)
{
	(*T).reel = z.reel-zi.reel;
	(*T).imag = z.imag-zi.imag;
	return 0;
}


//// COMPLEX_MUL

int complex_mul(complex *T,complex z,complex zi)
{
	(*T).reel = (z.reel*zi.reel)-(z.imag*zi.imag);
	(*T).imag = (z.reel*zi.imag)+(z.imag*zi.reel);
	return 0;
}


//// COMPLEX_DIV 

int complex_div(complex *T,complex z,complex zi)
{
	if ( zi.reel == 0 && zi.imag == 0) 
	{
	return -1;
	}
  	(*T).reel = ( (zi.reel*z.reel) + (z.imag*zi.imag) ) / ( (zi.reel*zi.reel) - (zi.imag*zi.imag) );	
	(*T).imag = ( (zi.reel*z.imag) - (z.reel*zi.imag) ) / ( (zi.reel*zi.reel) - (zi.imag*zi.imag) );
	return 0;
}

///// COMPLEX_ABS

int complex_abs(double *T,complex z)
{
	(*T) = sqrt( pow(z.reel,2) + pow(z.imag,2) );
	return 0;
}

//// COMPLEX_CONJ

int complex_conj(complex *T,complex z)
{
	(*T).reel = z.reel;
	(*T).imag = -z.imag;
	return 0;
}


/// Fonction affiche
//
void affiche( complex Z ) {
	printf("%lf + %lf * i \n", Z.reel, Z.imag ) ;
}


int main() {

	// declaration des complexes	
	complex z;
	z.reel=4;
	z.imag=3;
	
	complex zi;
	zi.reel=2;
	zi.imag=3;
	
	//fonction
	complex_real(z);
	complex_img(z);

	printf("z = %lf + %lf*i\n",z.reel,z.imag);
        printf("zi = %lf + %lf*i\n",zi.reel,zi.imag);	
	printf("\n");


	int erreur;
	complex resultat;
	
	printf("resultat de la fonction complex_add : \n");
	erreur = complex_add(&resultat,z,zi);
	affiche( resultat ) ;

	printf("resultat de la fonction complex_sub : \n");
	erreur = complex_sub(&resultat,z,zi);
	affiche( resultat ) ;
	
	printf("\n");
	
	printf("resultat de la fonction complex_mul : \n");
	erreur = complex_mul(&resultat,z,zi);
	affiche ( resultat ) ;

	printf("resultat de la fonction complex_div : \n");
	erreur = complex_div(&resultat,z,zi);
	if (erreur == -1) 
	{
		printf("Division par 0 impossible /!/");
	}
	else{
	affiche ( resultat ) ;
	}

	printf("\n");

	double resultat_module;
	printf("resultat de la fonction complex_abs : \n");
	erreur = complex_abs(&resultat_module,z);
	printf("%lf\n",resultat_module); 

	printf("resultat de la fonction complex_conj : \n");
	erreur=complex_conj(&resultat,z);
	affiche ( resultat ) ;

	printf("\n");

	return 0;
} 
