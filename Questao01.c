#include <stdio.h>
#include <math.h>

int main() {
    int num, num2, num3,num4;
    float aux, aux2, aux3;

    printf(" x1 ");
    scanf("%i", &num);

    printf(" x2 ");
    scanf("%i", &num2);

    printf(" y1 ");
    scanf("%i", &num3);

    printf(" y2 ");
    scanf("%i", &num4);

    aux = num2 - num;
    aux = pow(aux, 2);

    aux2 = num4 - num3;
    aux2 = pow(aux2, 2);

    aux3 = aux + aux2;
    aux3 = sqrt(aux3);

    printf("\n %f", aux3);
}
