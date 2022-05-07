#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1 = 0, num2 = 0, rest = 0;

    system("clear||cls");
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    system("clear||cls");
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    system("clear||cls");

    if (num1 == 0 || num2 == 0) {
        printf("Nao é possível realizar divisão por zero.\n");
    } else if (num1 > num2) {
        rest = num1 % num2;
    } else {
        rest = num2 % num1;
    }

    printf("O resto da divisão é %d\n", rest);

    return 0;
}