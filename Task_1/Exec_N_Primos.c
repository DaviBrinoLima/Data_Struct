#include <stdio.h>

int main(void) {
    int num_primos[1500] = {2,3,5,7};
    int i,u,j,aux_indice;

    int n;
    printf("Insira o valor limite do intervalo analisado: ");
    scanf("%d", &n);


    for (i=4; i<=1500; i++) {
        for (j= (num_primos[i-1]+1); j<=n; j++){
           if ((j%2 !=0) && (j%3 != 0) && (j%5 != 0) && (j%7 !=0)) {
            break;
           } 
        }

        if(j > n) {
            aux_indice = i-1;
            break;
        }

        num_primos[i] = j;
    }


   for (u=0; u<=aux_indice; u++) {
        printf("%d, ", num_primos[u]);
   }

   printf("\n");
}