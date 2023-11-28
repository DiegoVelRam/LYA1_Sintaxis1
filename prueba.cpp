#include <stdio.h>
#include <math.h>

int altura,i,j;
float x,y;

void main()
{
    y = 10;
    x = 9;
    x += (3 + 5) * 8 - (10 - 4) / 2; 
    x /= (y-3); 
    x --; 
    x *= (x-7);
   
    
    printf("\nValor de altura = ");
    scanf("%d",&altura);

    for (i = 1; i<=altura; i++)
    {
        for (j = 1; j<=i; j++)
        {
            printf("",j);
        }
        printf("\n");
    }
    i = 0;
    do
    {
        printf("-");
        i++;
    }

}