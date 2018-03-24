#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 5

struct Fila {
	int inicio, fim;
	int matricula[m];
	float nota_trab[m];
	float nota_prova[m];
};

int menu(){
	int r;
	printf("--- MENU PILHA ---\n\n");
	printf("0 - SAIR\n");
	printf("1 - INSERIR NA FILA\n");
	printf("2 - EXCLUIR DA FILA\n");
	printf("3 - EXIBIR A FILA\n");
	printf("4 - MATRÍCULA DA MAIOR MÉDIA\n");
	printf("5 - PRIMEIRO ELEMENTO DA FILA\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

void iniciaFila(struct Fila *F){ 
	F->inicio = 0;
	F->fim = -1;
}

void inserir(struct Fila *F){
	int mat;
	float notaT, notaP; 
	if (F->fim ==m-1){
		printf("\n\tFILA CHEIA!\n\n");
		system("pause");
	}
	else{
		printf("\t---- INSERINDO ----\n\n");
		printf("MATRÍCULA: ");
		scanf("%d", &mat);
		printf("NOTA PROVA: ");
		scanf("%f", &notaP);
		printf("NOTA TRABALHO: ");
		scanf("%f", &notaT);
		F->fim++;
		F->matricula[F->fim]=mat;
		F->nota_prova[F->fim]=notaP;
		F->nota_trab[F->fim]=notaT;
	} 
}

void excluir (struct Fila *F){
	if (F->fim < F->inicio)
		printf("\n\tLISTA VAZIA!\n\n");
	else {
		system("cls");
		F->inicio++;
	}
}

void exibir (struct Fila *F){
	int a;
	float media;
	if (F->fim < F->inicio){
		printf("\n\tFILA VAZIA!\n");
	}else {
		printf("\t---- EXIBINDO ----\n\n");
		for (a=F->inicio;a<=F->fim;a++){
		printf("\tMATRÍCULA: %d\n", F->matricula[a]);
		printf("\tNOTA PROVA: %.1f\n", F->nota_prova[a]);
		printf("\tNOTA TRABALHO: %.1f\n", F->nota_trab[a]);
		media = (F->nota_prova[a] + F->nota_trab[a])/2;
			if (media >= 7.0)
				printf("\n\tAPROVADO!\n");
			else 
				printf("\n\tREPROVADO!\n");
			printf("\t--------------------\n");
	}
}
	printf("\n");
}

int MaiorMedia (struct Fila *F){
	int a, mat;
	float aux, maior, media=0;
	if (F->fim < F->inicio){
		printf("\n\tFILA VAZIA!\n\n");
		return 0;
	}
	for (a=F->inicio;a<=F->fim; a++){
		maior = (F->nota_prova[a] + F->nota_trab[a])/2;
			if (maior >= media){
				media = maior;
				mat = F->matricula[a];
			}
	}
	printf("\n\tMATRÍCULA DA MAIOR MÉDIA: %d\n\n", mat);
}

int Primeiro (struct Fila *F){
		if (F->fim < F->inicio){
		printf("\n\tFILA VAZIA!\n\n");
		return 0;
	}
	printf("\t-------- PRIMEIRO ELEMENTO --------\n\n");
	printf("\t\tMATRÍCULA: %d\n", F->inicio[F->matricula]);
	printf("\t\tNOTA PROVA: %.1f\n", F->inicio[F->nota_prova]);
	printf("\t\tNOTA TRABALHO: %.1f\n\n", F->inicio[F->nota_trab]);
}

main (){
	setlocale(LC_ALL, "portuguese_Brazil");
	int r;
	struct Fila F;
	iniciaFila(&F);
	r=menu();
	
	while (r!=0){
		system("cls");
		if (r==1) {
			inserir(&F);
			system("cls");
		}
		else if (r==2){
			excluir(&F);
		}
		else if (r==3){
			exibir(&F);
			system ("pause");
		}
		else if (r==4){
			MaiorMedia(&F);
			system("pause");
		}
		else if (r==5){
			Primeiro(&F);
			system("pause");
		}
		system ("cls");
		r=menu();
	}
	
	
	
}
