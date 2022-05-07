#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int magicNumber = rand()%10, value = 0;

    do {
        printf("Informe um valor (0 até 10)\n-> ");
        scanf("%d", &value);
        system("clear||cls");

        if (magicNumber == value) {
            printf("Certo! %d é o número mágico.\n", value);
            return 0;
        } else if (value > magicNumber) {
            printf("Errado, muito alto.\n\n");
        } else printf("Errado, muito baixo.\n\n");
        

    } while (value != magicNumber);

    return 0;
}