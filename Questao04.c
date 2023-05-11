#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    float seno, x, parcial, fat;
    int cont, exp, n;
    exp = 3;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    x = x * PI / 180;
    seno = x;
    cont = 1;

    while (cont <= 15)
    {
        n = exp;
        fat = 1;

        while (n >= 1)
        {
            fat = fat * n;
            n--;
        }

        parcial = pow(x, exp) / fat;
        if (cont % 2 != 0) 
        {
            seno = seno - parcial;
        }
        else
        {
            seno = seno + parcial;
        }
        cont++;
    }
    printf("Valor de x: %f\n", seno);

    return 0;
}
