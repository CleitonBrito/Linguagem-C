#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define tam 10

int menu (){
	int r;
	printf("1-MAIOR\n2-MENOR\n3-SOMA\n4-MOSTRAR\n5-SAIR\n");
	printf("\nDigite sua Opção: ");
	scanf("%d", &r);
	return r;
}

void maior (int v[]){
	int x, aux;
	aux=v[0];
	for (x=0; x<tam;x++){
		if (v[x]>aux) aux=v[x];
	}
	printf("\nMaior Valor do Vetor = %d\n\n", aux);
}

void menor (int v[]){
	int x, aux;
	aux=v[0];
	for (x=0;x<tam;x++){
		if (v[x]<aux) aux=v[x];
	}
	printf("\nMenor Valor do Vetor = %d\n\n", aux);
}

void soma (int v[]){
	int x,aux=0;
	for (x=0;x<tam;x++){
		aux=aux+v[x];
	}
	printf("\nSomatorio = %d\n\n",aux);
}

void mostrar (int v[]){
	int x;
		for (x=0;x<tam;x++){
			printf("|%d|\n",v[x]);
		}
		printf("\n");
}


main (){
	setlocale(LC_ALL, "portuguese_Brazil");
	int v[tam], x,r;
	
	printf("--- DESCOBRIR O MAIOR/MENOR ---");
	for (x=0;x<10;x++){
		printf("Informe o valor da posição %d: ", x+1);
		scanf("%d", &v[x]);
	}
	
	system ("cls");
	r = menu();
	
	while (r!=5){
		system ("cls");
		if (r==1) maior(v);
		else if(r==2) menor(v);
		else if (r==3) soma(v);
		else if (r==4) mostrar(v);
		r = menu();
	}
	
}




