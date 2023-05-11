#include <stdio.h>
#include <math.h>

int main() {
    int inicio, fim, i, j, primo;

    printf("Escolha o numero inicial: ");
    scanf("%i", &inicio);

     printf("Escolha o numero final: ");
    scanf("%i", &fim);

    printf("Intervalo de: %i ate %i : \n", inicio, fim);
    
    i = inicio;

    while (i <= fim)
    {
        primo = 1;
        j = 2;
        while (j < i)
        {
           if(i % j == 0){
            primo = 0;
            break;
           }
           j = j + 1;
        }

        if(primo == 1 ){
            printf(" %i , ", i);
        }
        i = i + 1;
    }
}
