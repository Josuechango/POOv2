#include <stdio.h>


int main()
{
    int lado1, lado2, lado3;
    
    printf("Escriba el 1er lado de su triangulo: ");
    scanf("%d",&lado1);
    fflush(stdin);
    printf("\nEscriba el 2do lado de su triangulo: ");
    scanf("%d",&lado2);
    fflush(stdin);
    printf("\nEscriba el 3er lado de su triangulo: ");
    scanf("%d",&lado3);
    fflush(stdin);
    
    

    
    if (lado1<lado3 && lado2<lado3)
    {
        if ((lado1+lado2)>lado3)
        {
            if(lado1==lado2 && lado2==lado3)
            {
            printf("\nEl triangulo es un triangulo equilatero por tener todos sus lados iguales");
            }
            else if((lado1==lado2 && lado1!=lado3)||(lado3==lado2 && lado2!=lado1)||(lado1==lado3 && lado3!=lado2))
            {
            printf("\nEl triangulo es un triangulo isósceles por tener 2 de sus lados iguales");
            }
            else if(lado1!=lado2 && lado1!=lado3 &&lado2!=lado3)
            {
            printf("\nEl triangulo es un triangulo escaleno por tener 3 de sus lados diferentes");
            }
        }
        else printf("\nLa figura descrita es imposible");
    }
    else if (lado1<lado2 && lado3<lado2)
    {
        if ((lado1+lado3)>lado2)
        {
            if(lado1==lado2 && lado2==lado3)
            {
            printf("\nEl triangulo es un triangulo equilatero por tener todos sus lados iguales");
            }
            else if((lado1==lado2 && lado1!=lado3)||(lado3==lado2 && lado2!=lado1)||(lado1==lado3 && lado3!=lado2))
            {
            printf("\nEl triangulo es un triangulo isósceles por tener 2 de sus lados iguales");
            }
            else if(lado1!=lado2 && lado1!=lado3 &&lado2!=lado3)
            {
            printf("\nEl triangulo es un triangulo escaleno por tener 3 de sus lados diferentes");
            }
        }
        else printf("\nLa figura descrita es imposible");
    }
    if (lado3<lado1 && lado2<lado1)
    {
        if ((lado3+lado2)>lado1)
        {
            if(lado1==lado2 && lado2==lado3)
            {
            printf("\nEl triangulo es un triangulo equilatero por tener todos sus lados iguales");
            }
            else if((lado1==lado2 && lado1!=lado3)||(lado3==lado2 && lado2!=lado1)||(lado1==lado3 && lado3!=lado2))
            {
            printf("\nEl triangulo es un triangulo isósceles por tener 2 de sus lados iguales");
            }
            else if(lado1!=lado2 && lado1!=lado3 &&lado2!=lado3)
            {
            printf("\nEl triangulo es un triangulo escaleno por tener 3 de sus lados diferentes");
            }
        }
        else printf("\nLa figura descrita es imposible");
    }
    
    
    return 0;
}

