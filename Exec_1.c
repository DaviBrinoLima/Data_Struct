#include <stdio.h>


int main() {
    float a, b;

    printf("Insira os coeficientes da equação: ");
    scanf("%f%f",&a,&b);

    if (a!=0) {
        float x = -b/a;
        printf("O valor de x = %f", x);

    }

    else {
        printf("Não há zeros");
    }
}