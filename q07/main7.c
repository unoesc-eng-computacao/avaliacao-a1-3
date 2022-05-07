#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    float productPrice, totalPrice, avgTotalPrice;
    int productQtd, totalQtd;
    char response;

    do {
        totalQtd = 0;
        totalPrice = .0;
        avgTotalPrice = .0;
        productQtd = 0; 
        productPrice = .0;

        system("clear||cls");

        for (;;) {
            system("clear||cls");
            printf("Informe a quantidade de um produto: ");
            scanf("%d", &productQtd);

            if (productQtd == 0) break;

            printf("\nInforme o valor unitário do produto:  ");
            scanf("%f", &productPrice);

            totalQtd += productQtd;
            totalPrice += productPrice * productQtd;
        }

        avgTotalPrice =  totalPrice / (float)totalQtd;

        system("clear||cls");
        printf("VALOR TOTAL DA COMPRA:\t%.2f", totalPrice);
        printf("\nVALOR MÉDIO DA COMPRA:\t%.2f", avgTotalPrice);

        int reais = (int)totalPrice;
        float centavos = totalPrice - reais; 
        printf("\n\nO valor da compra é de %d  reais com %.2f centavos.\n\nQue equivale a:\n", reais, centavos);

        int oneHundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

        oneHundred = reais / 100;
        reais %= 100;

        fifty = reais / 50;
        reais %= 50;

        twenty = reais / 20;
        reais %= 20;

        ten = reais / 10;
        reais %= 10;

        five = reais / 5;
        reais %= 5;

        two = reais / 2;
        reais %= 2;

        one = reais / 1;
        reais %= 1;

        if(oneHundred > 0) printf("[%d] nota(s) de 100\n", oneHundred);
        if(fifty > 0) printf("[%d] nota(s) de 50\n", fifty);
        if(twenty > 0) printf("[%d] nota(s) de 20\n", twenty);
        if(ten > 0) printf("[%d] nota(s) de 10\n", ten);
        if(five > 0) printf("[%d] nota(s) de 5\n", five);
        if(two > 0) printf("[%d] nota(s) de 2\n", two);
        if(one > 0) printf("[%d] moeda(s) de 1", one);

        printf("\n\nDeseja repetir o programa?\n-> [S] Sim\n-> [Outro caractere] Não\n\n-> ");
        scanf(" %c%*[^\n]", &response);
        response = toupper(response);
    } while (response == 'S');

    return 0;
}