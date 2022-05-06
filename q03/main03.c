#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int initialValue = 0, finalValue = 0, qtdPerLine = 0;
    char response;

    do {
        system("clear||cls");
        
        do {
            printf("Informe o limite inicial (> 0)\n-> ");
            scanf("%d", &initialValue);
            system("clear||cls");
        } while (initialValue < 1);

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

        int aux = qtdPerLine;
        for (int i = 0; i <= finalValue; i++) {
            if (aux == 0) {
                aux = qtdPerLine;
                printf("\n");
            }

            if (initialValue + i % i != 0) {
                printf("%d ", i);
                aux--;
            }
        }

        printf("\n\nDeseja repetir o programa?\n-> [S] Sim\n-> [Outro caractere] Não\n\n");
        scanf(" %c%*[^\n]", &response);
        response = toupper(response);
    } while (response == 'S');

    return 0;
}