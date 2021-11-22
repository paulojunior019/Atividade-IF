#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento, area;
    printf("Digite a largura do lote:\n");
    scanf("%f", &largura);
    printf("Digite o comprimento do lote:\n");
    scanf("%f", &comprimento);
    area = largura*comprimento;
    printf("A area do lote = %.2f", area);
    return 0;
}
