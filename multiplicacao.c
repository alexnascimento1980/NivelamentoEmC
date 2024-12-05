#include <stdio.h>

int main() {

    // imprime o cabecalho do jogo
    printf ("***********************************************\n");
    printf ("**Bem vindo ao nosso jogo de multiplicacao!**\n");
    printf ("***********************************************\n");

	int numerox;
	int numeroy;
	

	printf ("Digite um valor para o numero X: ");
	scanf("%d", &numerox);
	
	printf ("Digite um valor para o numero Y: ");
	scanf("%d", &numeroy);
	
	int resultado = numerox * numeroy;

	printf ("O resultado da multiplicacao dos dois numero e: %d.\n", resultado);

}
