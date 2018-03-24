#include <stdio.h>
#include <locale.h>

main (){
	
	int x=1, y=5, digitos[11], digitosn[9], noved, rnoved, dezd, rdezd;
	
		setlocale(LC_ALL,"portuguese_Brazil");
	
		printf("-------------------------------------");
		printf("\n\tVALIDADOR DE CPF\n");
		printf("-------------------------------------\n\n");
		
			for (x == 1; x <= 11; x++){
				printf("Informe o %d.o dígito do CPF: ", x);
				scanf("%d", &digitos[x]);
			}
			
			if (digitos[1] == digitos[2] && digitos[1] == digitos[3] && digitos[1] == digitos[4] && digitos[1] == digitos[5] && digitos[1] == digitos[6] && digitos[1] == digitos[7] && digitos[1] == digitos[8] && digitos[1] == digitos[9] && digitos[1] == digitos[10] && digitos[1] == digitos[11]
			 && digitos[2] == digitos[3] && digitos[2] == digitos[4] && digitos[2] == digitos[5] && digitos[2] == digitos[6] && digitos[2] == digitos[7] && digitos[2] == digitos[8] && digitos[2] == digitos[9] && digitos[2] == digitos[10]&& digitos[2] == digitos[11]
			 && digitos[3] == digitos[4] && digitos[3] == digitos[5] && digitos[3] == digitos[6] && digitos[3] == digitos[7] && digitos[3] == digitos[8] && digitos[3] == digitos[9] && digitos[3] == digitos[10]&& digitos[3] == digitos[11]
			 && digitos[4] == digitos[5] && digitos[4] == digitos[6] && digitos[4] == digitos[7] && digitos[4] == digitos[8] && digitos[4] == digitos[9] && digitos[4] == digitos[10]&& digitos[4] == digitos[11]
		     && digitos[5] == digitos[6] && digitos[5] == digitos[7] && digitos[5] == digitos[8] && digitos[5] == digitos[9] && digitos[5] == digitos[10]&& digitos[5] == digitos[11]
		     && digitos[6] == digitos[7] && digitos[6] == digitos[8] && digitos[6] == digitos[9] && digitos[6] == digitos[10]&& digitos[6] == digitos[11]
		     && digitos[7] == digitos[8] && digitos[7] == digitos[9] && digitos[7] == digitos[10]&& digitos[7] == digitos[11]
		     && digitos[8] == digitos[9] && digitos[8] == digitos[10]&& digitos[8] == digitos[11]
		     && digitos[9] == digitos[10]&& digitos[9] == digitos[11]
		     && digitos[10] ==digitos[11]){
				printf("\n--------------------------------");
				printf("\n\n\tCPF INVÁLIDO!\n");
			}
			else {
			digitosn[1] = digitos[1]*10;
			digitosn[2] = digitos[2]*9;
			digitosn[3] = digitos[3]*8;
			digitosn[4] = digitos[4]*7;
			digitosn[5] = digitos[5]*6;
			digitosn[6] = digitos[6]*5;
			digitosn[7] = digitos[7]*4;
			digitosn[8] = digitos[8]*3;
			digitosn[9] = digitos[9]*2;
			
			noved = digitosn[1] + digitosn[2] + digitosn[3] + digitosn[4] + digitosn[5] + digitosn[6] + digitosn[7] + digitosn[8] + digitosn[9]; 
			
			noved = noved*10;
			
			rnoved = noved%11;
			
			if (rnoved == 10)
				rnoved = 0;
			
			if (digitos[10] == rnoved){
				
				digitos[1] = digitos[1]*11;
				digitos[2] = digitos[2]*10;
				digitos[3] = digitos[3]*9;
				digitos[4] = digitos[4]*8;
				digitos[5] = digitos[5]*7;
				digitos[6] = digitos[6]*6;
				digitos[7] = digitos[7]*5;
				digitos[8] = digitos[8]*4;
				digitos[9] = digitos[9]*3;
				digitos[10]	= digitos[10]*2;
				
				dezd = digitos[1] + digitos[2] + digitos[3] + digitos[4] + digitos[5] + digitos[6] + digitos[7] + digitos[8] + digitos[9] + digitos[10];
				
				dezd = dezd*10;

				rdezd = dezd%11;
		
				if (rdezd == 10){
						rdezd = 0;
						printf("\n--------------------------------");
						printf("\n\n\tCPF VÁLIDO!\n");
					}	
					else if(rdezd == digitos[11]){
						printf("\n--------------------------------");
						printf("\n\n\tCPF VÁLIDO!\n");	
				} else {
					printf("\n--------------------------------");
					printf("\n\n\tCPF INVÁLIDO!\n");	
				}
			} else{
				printf("\n--------------------------------");
				printf("\n\n\tCPF INVÁLIDO!\n");
			}
					
		}
	
	return 0;
}
