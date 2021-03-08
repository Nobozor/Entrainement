// CALCULATRICE SIMPLE 


#include <stdio.h>

int main()
{
    // déclaration des entier à saisir
    int iSaisi_a;
    int iSaisi_b;
    char iSaisi_operande;
    printf("Saisir son opération du type : entier opérande entier\n:");scanf("%d %c %d",&iSaisi_a,&iSaisi_operande,&iSaisi_b);
    
    printf("%d %c %d = ",iSaisi_a,iSaisi_operande,iSaisi_b);
    
    // Addition
    
    if(iSaisi_operande=='+')
    {
        printf(" %d\n ",iSaisi_a+iSaisi_b);
        
    }
    
    // Soustraction
    
    if(iSaisi_operande=='-')
    {
        printf(" %d\n ",iSaisi_a-iSaisi_b);
        
    }
    
    //Multiplication
    
    if(iSaisi_operande=='*')
    {
        printf(" %d\n ",iSaisi_a*iSaisi_b);
        
    }
    
    //Division
    
    if(iSaisi_operande=='/')
    {
        printf(" %d\n ",iSaisi_a/iSaisi_b);
        
    }
    
    //Modulo
    
    if(iSaisi_operande=='%')
    {
        printf(" %d\n ",iSaisi_a%iSaisi_b);
        
    }
    
    return 0;
}

