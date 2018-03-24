#include <stdio.h>

main(){
	
	int idade, falta, sobra;
	
	printf("--------------------------\n");
	printf("Carteira de Habilitacao\n");
	printf("--------------------------\n");
	printf("\nInforme sua idade: ");
	scanf("%i", &idade);
	
	if (idade < 18){
		falta = 18-idade;
		printf("\nVoce ainda precisa esperar %i ano(s).\n", falta);
	} else if (idade == 18){
		printf("\nJa Pode Tirar a Carteira\n");
	} else if (idade > 18){
		sobra = idade-18;
		printf("\nHa %i anos voce ja tinha direiro a carteira.\n", sobra);
	}
		
	return 0;
}
