#include <stdio.h>

main(){
	
	int Ano, Mes, Dia, Total;
	
	printf("--- CONVERTER IDADE EM DIAS ---\n\n");
	printf("Informe Sua Idade\n");
	printf("Em Anos: ");
	scanf("%i", &Ano);
	printf("Em Meses: ");
	scanf("%i", &Mes);
	printf("Em Dias: ");
	scanf("%i", &Dia);
	
	Ano = Ano*365;
	Mes= Mes*30;
	Total = Ano + Mes + Dia;
	printf("\nSua Idade em Dias e: %i", Total);
	
	
	return 0;
}
