#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char category = 'A';
    int sum = 0, quantity = 0, total = 0;
    float avg = 0.0;

    system("clear||cls");

    do {
        printf("Informe a categoria: ");
        scanf(" %c%*[^\n]", &category);
        system("clear||cls");

        category = toupper(category);
        if (category != 'A' && category != 'B' && category != 'C') break;

        do {
            printf("Informe a quantidade (maior que 0): ");
            scanf("%d", &quantity);
            system("clear||cls");
        } while (quantity <= 0);

        sum += quantity;
        total++;
    } while (category == 'A' || category == 'B' || category == 'C');

    if (total < 1) {
        printf("Não foi possível calcular a média, pois nenhum produto válido foi informado!");
        return 0;
    }

    avg = (float)sum / (float)total;

    printf("A média dos produtos é %.2f", avg);

    return 0;
}