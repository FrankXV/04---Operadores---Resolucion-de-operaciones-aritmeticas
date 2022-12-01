/* Perdir dos numeros al usauario, sumarlos, restarlos, multiplicarlos y dividirlos */

#include <iostream>
#include <stdio.h>

int main() {
    float n1 , n2, sum=0, resta=0, mult=0, div=0;

    printf("Digite los numeros con los cuales quiera realizar la operacion: \n");
    scanf("%f %f",&n1,&n2);

    sum = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("La suma es : %.2f \n", sum);
    printf("La resta es : %.2f \n", resta);
    printf("La division es : %.2f \n", mult);
    printf("La multiplicadcion es : %.2f \n", div);






}
