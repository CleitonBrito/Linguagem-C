#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y, aux=0, V[10];
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	printf("--- ACHEI E N�O ACHEI ---\n\n");
	for (x = 0; x < 10; x++){
		printf("Informe a Matr�cula da posi��o %d: ", x);
		scanf("%d", &V[x]);
	}
	
	printf("\nInforme Outra Matr�cula: ");
	scanf("%d", &y);
	
	for (x = 0; x < 10; x++){
		if ( y == V[x]){
			aux = aux + 1;
		 }
	}
	
	if (aux >=1)
		printf("\n\tACHEI!\n");
	else
		printf("\n\tN�O ACHEI!\n");
		
	return 0;
}
