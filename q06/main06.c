#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int value = 0;
    char response;

    do {
        system("clear||cls");

        do {
            printf("Informe um número (> 0):\n-> ");
            scanf("%d", &value);
            system("clear||cls");
        } while (value < 1);

        for (int i = 1; i <= value; i++) {
            for (int j = 0; j < i; j++) {
                printf("%d\t", i);
            }

            printf("\n");
        }

        printf("\n\nDeseja repetir o programa?\n-> [S] Sim\n-> [Outro caractere] Não\n\n-> ");
        scanf(" %c%*[^\n]", &response);
        response = toupper(response);
    } while (response == 'S');

    return 0;
}