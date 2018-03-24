#include <stdio.h>

main(){
	
	float Brancos, Nulos, Validos, Total;
	
	printf("--- ELEITORES ---\n\n");
	printf("Total de Eleitores: ");
	scanf("%f", &Total);
	printf("Total de Votos Brancos: ");
	scanf("%f", &Brancos);
	printf("Total de Votos Nulos: ");
	scanf("%f", &Nulos);
	printf("Total de Votos Validos: ");
	scanf("%f", &Validos);
	
	Brancos = (Brancos*100)/Total;
	Nulos = (Nulos*100)/Total;
	Validos = (Validos*100)/Total;
	
	printf("\nBrancos: %0.2f%%\nNulos: %0.2f%%\nValidos: %0.2f%%", Brancos, Nulos, Validos);
	
	return 0;
}
