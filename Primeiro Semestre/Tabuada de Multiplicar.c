#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y, A[10], M[10];
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	printf("--- TABUADA DE MULTIPLICAR ---\n\n");
	for (y = 0; y < 10; y++){
		printf("Informe Valor da Posição %d: ", y);
		scanf("%d", &A[y]);
	}
	
	printf("\nInforme Um Valor X: ");
	scanf("%d", &x);
	
	for (y = 0; y < 10; y++){
		M[y] = A[y]*x;
		printf("\n\t%d   * \t%d\t = \t%d", x, A[y], M[y]);
	}
	
	return 0;
}
