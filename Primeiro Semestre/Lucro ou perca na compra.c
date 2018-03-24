#include <stdio.h>

main(){
	
	float custo, venda, total, percente;
	
	printf("--- LUCRO OU PERCA NA COMPRA ---\n\n");
	printf("Informe o valor de custo do produto: ");
	scanf("%f", &custo);
	printf("Informe o valor de venda do produto: ");
	scanf("%f", &venda);
	printf("\n");
		if (venda > custo) {
			total = venda - custo;
			percente = (total*100)/venda;
			printf("Voce teve lucro de R$ %0.2f reais, equivalente a %.1f%%", total, percente);
	}
		else
			if (venda < custo) {
				total = custo - venda;
				percente = (total*100)/custo;
				printf("Voce teve perca de R$ %0.2f reais, equivalente a %.1%%", total, percente);
			}
		

	return 0;
}
