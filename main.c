#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    int num1[10], num2[10], soma[10];

    setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 10; i++) {
        printf("%d. Escreva um número: ",i);
        scanf("%d",&num1[i]);
    }
    printf("\n\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d. Escreva um número: ",i);
        scanf("%d",&num2[i]);
    }
    printf("\n\n");
    for (int i = 1; i <= 10; i++) {
        soma[i] = num1[i] + num2[i];
        printf("%d. Resultado: %d\n",i,soma[i]);
    }
}