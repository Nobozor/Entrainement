
#include <stdio.h>
#include <math.h> 

double f (double x) // Fonction pour la fonction f(x)
{
	double fonction = cos( x );
	return fonction;
}

double trapeze (double (*f)(double ),double a,double b,double h)
{
    double aire = 0;
    double L = (b-a)/h;
    int n;
    
    for(n = 0 ; n < h; n++)
    {
        aire += ( ( f(a+(L*n)) + f(a+(L*n)+L) ) * L ) / 2;
    }
return aire;
}




int main()
{
int n = 5;
    while (n<10000)
    {
        double meth3 = trapeze(f,1,2,n);
        printf("Aire avec methode trapèze : %lf pour h = %d\n",meth3,n);
        n = n*5;
    } 
return 0;
}
