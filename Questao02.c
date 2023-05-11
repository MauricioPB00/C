#include <stdio.h>
#include <math.h>

int main() {
    float medPar = 0, medImp = 0, maior = 0, menor = 9999999;
    int contPar = 0, contImp = 0, valor;

    while (valor >= 0) {
        printf("Digite um numero ");
        scanf("%i", &valor);

        if (valor >= 0) {
            if (valor % 2 == 0) {
                medPar += valor;
                if (valor > maior) {
                    maior = valor;
                }
                contPar++;
            } else {
                medImp += valor;
                if (valor < menor) {
                    menor = valor;
                }
                contImp++;
            }
        } else {
            printf("Bye, bye!\n");
        }
    }

    if (contPar > 0) {
        medPar = medPar / contPar;
    }
    if (contImp > 0) {
        medImp = medImp / contImp;
    }

    printf("Media par: %.0f\n", medPar);
    printf("Media impar: %.0f\n", medImp);
    printf("Maior par: %.0f\n", maior);
    printf("Menor impar: %.0f\n", menor);

    return 0;

    /*
    
    Questao 2 -  Resposta B 

    */
}
