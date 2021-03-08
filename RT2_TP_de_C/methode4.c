#include <stdio.h>
#include <math.h> 

double f (double x) // Fonction pour la fonction f(x)
{
	double fonction = cos( x );
	return fonction;
}

double polynome (double (*f)(double ),double a,double b,double h)
{
    int n;
    double aire = 0;

    
    for(n = 0 ; n < h; n++)
    {
        double L = (b-a)/h;
        double La = a+(L*n) ;
        double Lb = a+(L*n)+L; 
        //printf("La : %lf\n",La);
        //printf("Lb : %lf\n",Lb);
        //printf("L : %lf\n",L);
        // équivalent à  (b-a)/6 * ( f(a) + 4*f( (a+b)/2 )+ f(b) ) formule du TP 
        aire+=(((Lb)-La)/6) * (f(La)+4*f((La+(Lb))/2)+f(Lb));
    }
return aire;
}



int main()
{
int n = 1;
    while (n<26)
    {
        double meth4 = polynome(f,1,2,n);
        printf("Aire methode polynomes : %lf pour h = %d\n",meth4,n);
        n = n*5;
    } 
    
  
  
return 0;
}
