#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese_Brazil");
	int estoque, estoquemax, estoquemin;
	float media;
	
	printf("Quantidade no estoque: ");
	scanf("%i", &estoque);
	printf("Quantidade MAXIMA em estoque: ");
	scanf("%i", &estoquemax);
	printf("Quantidade MINIMA em estoque: ");
	scanf("%i", &estoquemin);
	
	media = (estoquemax + estoquemin)/2;
	
	printf("\nMedia: %0.2f\n", media);
	
	if (estoque >= media)
		printf("Não Efetuar Compra");
	else
		printf("Efetuar Compra");
	
	return 0;
}
