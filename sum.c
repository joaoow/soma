#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("A soma e: %d\n", sum);

    return 0;
}
