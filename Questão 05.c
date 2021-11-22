#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paes, broas;
    float total;
    printf("Digite a quantidade de broas vendidas:\n");
    scanf("%d", &broas);
    printf("Digite a quantidade de paes vendidos:\n");
    scanf("%d", &paes);
    total = (paes*0.5)+(broas*2.0);
    printf("O valor total arrecadado foi: %f\n", total);
    printf("Valor a ser quardado na poupanca é: %f\n", total*0.1);

    return 0;
}
