#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char category = 'A';
    int sum = 0, quantity = 0, total = 0;
    float avg = 0.0;

    system("clear||cls");

    while (category == 'A' || category == 'B' || category == 'C') {
        printf("Informe a categoria: ");
        scanf(" %c%*[^\n]", &category);
        system("clear||cls");

        category = toupper(category);

        do {
            printf("Informe a quantidade (maior que 0): ");
            scanf("%d", &quantity);
            system("clear||cls");
        } while (quantity <= 0);

        sum += quantity;
        total++;
    }

    avg = (float)sum / (float)total;

    printf("A média dos produtos é %.2f", avg);

    return 0;
}