#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int initialValue = 0, finalValue = 0, qtdPerLine = 0;
    char response;

    do {
        system("clear||cls");
        
        do {
            printf("Informe o limite inicial (> 1)\n-> ");
            scanf("%d", &initialValue);
            system("clear||cls");
        } while (initialValue <= 1);

        do {
            printf("Informe o limite final (>= limite inicial[%d])\n-> ", initialValue);
            scanf("%d", &finalValue);
            system("clear||cls");
        } while (finalValue < initialValue);

        do {
            printf("Informe a quantidade de números imprimir por linha (> 0))\n-> ", initialValue);
            scanf("%d", &qtdPerLine);
            system("clear||cls");
        } while (qtdPerLine < 1);

        int currentCol = 1;
        while (initialValue <= finalValue) {
            int isPrime = 1; // boolean ;-;

            for (int i = 2; i < initialValue; i++) {
                if (initialValue % i == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                printf("%d ", initialValue);
                
                if (currentCol == qtdPerLine) {
                    printf("\n");
                    currentCol = 1;
                } else {
                    printf("\t");
                    currentCol++;
                }
            }

            initialValue++;
        }

        printf("\n\nDeseja repetir o programa?\n-> [S] Sim\n-> [Outro caractere] Não\n\n-> ");
        scanf(" %c%*[^\n]", &response);
        response = toupper(response);
    } while (response == 'S');

    return 0;
}