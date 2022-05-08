#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char response;
    float temperature = 0.0;

    system("clear||cls");

    printf("O paciente está saudável?\n-> [S] Sim\n-> [Outro caractere] Não\n\n");
    scanf(" %c%*[^\n]", &response);
    system("clear||cls");
    response = toupper(response);

    if (response == 'S') {
        printf("O paciente está saudável.\n");
        return 0;
    }

    printf("O paciente tem dor?\n-> [S] Sim\n-> [Outro caractere] Não\n\n");
    scanf(" %c%*[^\n]", &response);
    system("clear||cls");
    response = toupper(response);

    if (response == 'S') {
        printf("O paciente está doente.\n");
        return 0;
    }

    printf("Qual a temperatura do paciente?\n\n");
    scanf("%f", &temperature);
    system("clear||cls");

    if (temperature <= (float)37) {
        printf("O paciente está saudável.\n");
        return 0;
    }

    printf("O paciente está doente.\n");

    return 0;
}