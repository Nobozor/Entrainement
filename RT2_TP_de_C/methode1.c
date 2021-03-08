#include <stdio.h>
#include <math.h> 

double f (double x) // Fonction pour la fonction f(x)
{
	double fonction = cos(x);
	return fonction;
}

double f2 (double x)
{
    double fonction = cos(x*x);
    return fonction;
}

double integral(double (*f)(double ),double a,double b,double h)
{
    double aire = 0; 
    double L = (b-a)/h;
    for(double n = 0 ; n < h; n++) 
    {
        aire += f(a+(n*L)) * L ;
        //printf("aire : %lf\n",aire);
        n++;
    }
return aire;
}

int main()
{
    
    //double fonction = f(4);
    //printf("la fonction vaut : %f\n",fonction);
    
    int n = 5 ;
    while (n<=10000)
    {
        double methode1=integral(f,1,2,n);
        printf("intégral : %lf avec h = %d et f = cos (x)\n ",methode1,n);
        n = n*5;
    }
    
    return 0;
}

