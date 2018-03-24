#include <stdio.h>

main (){
	
	int Frete;
	char Op;
	float Qtd, Total;
	
	printf("-------------------------\n");
	printf("    VENDA DE SAPATOS\n");
	printf("-------------------------\n");
	printf("70 R$ Cada\n");
	printf("\nQuantos Sapatos Deseja Comprar: ");
	scanf("%f", &Qtd);
	
	Qtd = Qtd*70;
	
	printf("\nDeseja Frete Para as regioes NORDESTE OU SUDESTE? [S/N]\n ");
	scanf("%s", &Op);
	
	if (Op == 'S') {
		printf("[1] NORDESTE\n");
		printf("[2] SUDESTE\n");
		scanf("%i", &Frete);
	}
	else {
		printf("Total a pagar: %.2f R$. Obrigado, Volte Sempre!\n", Qtd);
	}
		
			switch (Frete) {
				case 1:
					Total = (Qtd*5)/100;
					Total = Total + Qtd;
					printf("Para a Regiao Nordeste, Sera Cobrado 5%% a Mais Na Sua Compra.\n\nTOTALIZANDO: %.2fR$\n",Total);
					break;
				case 2:
					Total = (Qtd*2)/100;
					Total = Total + Qtd;
					printf("Para a Regiao Sudeste, Sera Cobrado 2%% a Mais na Sua Compra.\n\nTOTALIZANDO: %.2fR$\n", Total);
				
			} 
	
	return 0;
}
