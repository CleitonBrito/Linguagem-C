#include <stdio.h>
#include <locale.h>

main (){
	
	int N=0;

	setlocale(LC_ALL, "portuguese_Brazil");
	
	printf("--- SOMA DE VETORES ---\n\n");
	printf("Informe o Tamanho do Vetor: ");
	scanf("%d", &N);
	
	int x=0, A[N], B[N], C[N];
	
	printf("\n\n\tVetor A\n\n");
	for (x = 0; x < N; x++){
		printf("Informe o Valor da Posição %d: ", x);
		scanf("%d", &A[x]);
	}
	
	printf("\n\tVetor B\n\n");
	for (x = 0; x < N; x++){
		printf("Informe o Valor da Posição %d: ", x);
		scanf("%d", &B[x]);	
	}
	
	printf("\n\n\tVetor C\n\n");
	for (x = 0; x < N; x++){
		C[x] = A[x] + B[x];
		printf("\n\t%d\t + \t%d\t = \t%d \n", A[x], B[x], C[x]);	
	}
		
	return 0;
}
