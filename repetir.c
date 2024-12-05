#include <stdio.h>

int main() {
    int soma = 0;
    int i = 1;
    for(i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("A soma de todos os números de 1 até 100 é: %d\n", soma);
    return 0;
}
