//Multiplication egyptienne


#include <stdio.h>

int main()
{
   // déclaration des variables de saisi
   int Saisi1;
   int Saisi2;
   
   //invitation à rentrer un nombre
   printf("saisir un nombre : ");scanf("%d",&Saisi1); 
   printf("saisir un nombre : ");scanf("%d",&Saisi2);
   
   // test pour toujours avoir a > b 
   int Entier_a = Saisi1>Saisi2?Saisi1:Saisi2;
   int Entier_b = Saisi2<Saisi1?Saisi2:Saisi1;
   
   printf("entier_a : %d\n",Entier_a);
   printf("entier_b : %d\n",Entier_b);
   
   //Declaration de nouvelles variables qui vont être manipulé dans la boucle
   int a=Entier_a;
   int b=Entier_b;
   int ia=0;
   
   do 
   {
    //printf("%d*%d = ",Entier_a,Entier_b);
    
    if(b%2==0) // si b paire
    {
        printf("%d*%d = ",Entier_a,Entier_b);
        a = a*2;
        b = b/2;
        printf("%d * %d + ",a,b);
        printf ("%d\n",a);
    }
    
    if(b%2!=0 && b!=0) // si b impaire
    {
        printf("%d*%d = ",Entier_a,Entier_b);
        b=(b-1);
        printf("%d * %d + ",a,b);
        ia=ia+a;
        printf("%d\n",ia);
        
    }
  
   }while(b!=0);
   
   printf("%d*%d = %d",Entier_a,Entier_b,ia);
   return 0;
}