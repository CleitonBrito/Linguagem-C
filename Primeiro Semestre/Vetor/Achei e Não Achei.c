#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y, aux=0, V[10];
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	printf("--- ACHEI E NÃO ACHEI ---\n\n");
	for (x = 0; x < 10; x++){
		printf("Informe a Matrícula da posição %d: ", x);
		scanf("%d", &V[x]);
	}
	
	printf("\nInforme Outra Matrícula: ");
	scanf("%d", &y);
	
	for (x = 0; x < 10; x++){
		if ( y == V[x]){
			aux = aux + 1;
		 }
	}
	
	if (aux >=1)
		printf("\n\tACHEI!\n");
	else
		printf("\n\tNÃO ACHEI!\n");
		
	return 0;
}
