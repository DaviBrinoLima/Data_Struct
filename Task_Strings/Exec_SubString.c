#include <stdio.h>
#include <string.h>

int main(void) {
    char string_1[1500000], string_2[1500000];
    char *aux;
    int len_1, len_2;
    


    printf("Insira a primeira string: ");
    fgets(string_1, 1500000, stdin);
    len_1 = strlen(string_1);


    printf("Insira a segunda string: ");
    fgets(string_2, 1500000, stdin);
    len_2 = strlen(string_2);


    aux = strstr(string_1, string_2);

    if (aux != NULL) {
    printf("\nA substring %s foi encontrada em: %s\n", string_2, string_1);
    } 

    else {
    printf("\nA substring %s não foi encontrada em: %s\n", string_2, string_1);
    }
}