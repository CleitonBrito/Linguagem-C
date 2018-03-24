#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	
	setlocale(LC_ALL, "portuguese_Brazil");
	float media=0, soma=0;
	int x, y=0;
	
	
	printf("--- SOMAR ---\n\n");
	printf("Quantos valores deseja somar?\nDigite: ");
	scanf("%d", &x);
	system("cls");
	while(x>0){
		printf("Informe um Valor: ");
		scanf("%d", &y);
		soma = soma + y;
		x--;
	}

	printf("\nSoma: %.1f\n", soma);
	printf("Media: %.1f\n", media=soma/y);
	printf("Vezes de Números somados: %d\n", y);
	
	return 0;
}
