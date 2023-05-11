#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a,b,s;
    a=1;
    b=10;
    s=0;

    printf("\n Teste de mesa !");

    while(a <= 5){
        if( a < b ){      
            printf("\n a = %i, b = %i, s = %i ", a, b, s);
            s = s +  a * b;
        }
        else{
            s = s - a * b;
        }
        a = a + 1;
        b = b - 1;
    }
    printf("\n =======================");
    printf("\n a = %i, b = %i, s = %i ", a, b, s);
}
/*
Teste de mesa !
 a = 1, b = 10, s = 0
 a = 2, b = 9, s = 10
 a = 3, b = 8, s = 28
 a = 4, b = 7, s = 52
 a = 5, b = 6, s = 80
 =======================
 a = 6, b = 5, s = 110
*/
 
