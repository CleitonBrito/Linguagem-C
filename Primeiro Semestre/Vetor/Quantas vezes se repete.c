#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y, z=0, A[10];
	
	setlocale(LC_ALL, "portuguese_Brazil");
	printf("--- QUANTAS VEZES SE REPETE ---");
	for (x = 0; x < 10; x++){
		printf("Informe o Valor da Posi��o %d: ", x);
		scanf("%d", &A[x]);
	}
	
	printf("\nInforme Outro Valor: ");
	scanf("%d", &y);
	
	for (x = 0; x < 10; x++){
		if (y == A[x]){
		z = z+1;	
		}
	} printf("\n\tO N�mero %d Aparece %d Vezes\n", y , z);
	
	return 0;
}
