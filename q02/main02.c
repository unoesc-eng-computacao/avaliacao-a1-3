#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char response = '';

    printf("O paciente está saudável: ");
    scanf(" %c%*[^\n]", &response);
    system("clear||cls");

    response = toupper(response);

    if (response == 'S') {
        printf("O paciente está saudável.")
        return 0;
    }

    

    return 0;
}