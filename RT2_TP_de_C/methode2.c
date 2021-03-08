#include <stdio.h>
#include <math.h> 

double f (double x) // Fonction pour la fonction f(x)
{
	double fonction = cos(x);
	return fonction;
}

double integralplus(double (*f)(double ),double a,double b,double h)
{
    double aire = 0; 
    double x;
    double L = (b-a)/h;
    //int n;
    
    for(int n = 0 ; n < h; n++) 
    {
        double petitaire = f(a+(L*n)) * L;
        double grandaire = f(a+(L*n)+L) * L;
         x = (grandaire>petitaire)?grandaire:petitaire;
         aire += x;
        // printf("aire plus : %f\n",aire);
    }
    
return aire;
}


double integralmoins (double (*f)(double ),double a,double b,double h)
{
    double aire = 0;
    double x;
    double L = (b-a)/h;
    //int n;   

        for(int n = 0 ; n < h; n++) 
    {
        double petitaire = f(a+(L*n)) * L;
        double grandaire = f(a+(L*n)+L) * L;
        x = (petitaire<grandaire)?petitaire:grandaire;
        aire += x;
        //printf("aire moins : %f\n",aire);
    
    }
return aire;
}


int main()
{
    int n = 5;
    while (n<10000)
    {
    double Splus = integralplus(f,1,2,n);
    double Smoins = integralmoins(f,1,2,n);
    printf("S+ : %lf pour h = %d\n",Splus,n);
    printf("S- : %lf pour h = %d\n\n",Smoins,n);
    n = n*5;
    }
return 0;
}
