#include <stdio.h>

main(){
	
	int conta;
	float saldo, debito, credito;
	
	printf("--- SALDO - DEBITO - CREDITO ---\n\n");
	printf("Informe o Numero da Conta: ");
	scanf("%i", &conta);
	printf("Informe o Saldo: ");
	scanf("%f", &saldo);
	printf("Informe o Debito: ");
	scanf("%f", &debito);
	printf("Informe o Credito: ");
	scanf("%f", &credito);
	
	saldo = saldo - debito + credito;
	
	if (saldo >= 0)
		printf("Saldo Positivo!");
	else
		printf("Saldo Negativo");
	
	return 0;
}
