#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifndef BOOL
    #define boolean
    typedef enum {FALSE, TRUE} Boolean;
	#endif

typedef struct no{
	int info; 
	struct no* lig; 
}tno;
typedef struct{
	tno* inicio; 
	tno* fim; 
}fila; 
fila f;
fila f2;
void definir(fila *q){
	q->inicio = NULL;
	q->fim = NULL;
}

boolean vazia (fila *q){
	return (q->inicio == NULL);
}
boolean vazia2 (fila *f2){
	return (f2->inicio == NULL);
}
boolean inserir (fila *q, int valor){ // 1
	tno *p;
	
	p = malloc(sizeof(tno));
		if (p == NULL) return FALSE;
		
	p->info = valor;
	p->lig = NULL;
	
		if (vazia(q))
			q->inicio = p;
		else
			q->fim->lig = p;
	
	q->fim = p;
	return TRUE;
}
int exibir(fila *q){ // 2
	
	tno *p = q->inicio;
	
	printf("--- EXIBINDO ---\n\n");
	while (p!=NULL){
		printf("%d\n", p->info);
		p=p->lig;
	}
	printf("\n");
}
boolean remover(fila *q){ //3
	tno *p;
	int info;
	
	if (vazia(q)){
		printf("--- FILA VAZIA ---\n\n");
		return FALSE;
	} 
	
	printf("--- REMOVIDO COM SUCESSO ---\n\n");
	p = q->inicio;
	info = p->info;
	q->inicio = p->lig;
	
		if (q->inicio == NULL)
		q->fim = NULL;
		
	free(p);
	return TRUE;
	
}
void tornar_vazia(fila *q){ //4
	tno *del, *nextno;
	if(!vazia(q)){
		nextno = q->inicio;
		while(nextno!=NULL){
			del = nextno;
			nextno = nextno->lig;
			free(del);
		}
	}
	definir(q);
	printf("--- ESVAZIOU A FILA ---\n\n");
}
int media(fila *q){ //5
	tno *p = q->inicio;
	float valores=0, media=0;
	int x=0;
	p=q->inicio;
		if(p==NULL){
			printf("LISTA VAZIA!\n\n");
			return 0;
		}
	printf("--- MÉDIA ---\n\n");
	while (p!=NULL){
		valores = valores + p->info;
		p=p->lig;
		x++;
	}
	printf("Média: %.2f\n\n", valores/x);
}
int pares(fila *q){ //6

	tno *p = q->inicio, *pares;
	p=q->inicio;
	
	if(p==NULL){
		printf("LISTA VAZIA!\n\n");
		return 0;
	}
	printf("--- VALORES PARES ---\n\n");
	while (p!=NULL){
		if(p->info>0 && p->info%2 ==0){
			printf("%d\n", p->info);
		}
		p=p->lig;
	}
	printf("\n");
}
void aparece(fila *q){ //7
	tno *p = q->inicio;
	int k, cont=0;
	
	printf("--- O VALOR SE REPETE ---\n\n");
	printf("Informe um valor: ");
	scanf("%d", &k);
	
	while (p!=NULL){
		if(p->info == k){
			cont++;
		}
		p=p->lig;
	}
	printf("\nO valor %d aparece %d vez(es).\n\n", k, cont);
}

void fila2 (fila *f1, fila *f2){
	tno *p = f1->inicio;
	int tam=0;
	
	
	while(p!=NULL){
		p=p->lig;
		tam++;
	}
	int fila1[tam], inversa[tam], contador, cont1=tam, cont2=tam, u=tam;
	
	p = f1->inicio;
	while(p!=NULL){
		fila1[tam] = p->info;
		p=p->lig;
		tam--;
}
	for(contador=0; contador <= cont1; contador++){
		inversa[contador] = fila1[contador];
		u--;
	}
	int x;
	for(x=1; x <= cont2; x++){
		printf("%d\n", inversa[x]);
		}
}
 
int menu(){
	int r;
	
	printf("--- MENU FILA ---\n\n");
	printf("0 - SAIR\n");
	printf("1 - INSERIR\n");
	printf("2 - EXIBIR A FILA\n");
	printf("3 - REMOVER DO INICIO\n");
	printf("4 - ESVAZIAR FILA\n");
	printf("5 - MOSTRAR  O VALOR MÉDIO DA FILA\n");
	printf("6 - MOSTRAR OS VALORES PARES DA FILA\n");
	printf("7 - CONTAR QUANTAS VEZES O VALOR K APARECE NA FILA \n");
	printf("8 - FILA 2 NA ORDEM INVERSA\n\n");
	printf("DIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

main(){
	int r, info;
	fila f;
	definir(&f);
	setlocale(LC_ALL, "");
	r=menu();
	
	while(r!=0){
		system("cls");
		if(r==1){
			printf("INFORME UM VALOR: ");
			scanf("%d", &info);
			inserir(&f, info);
		}
		else if(r==2){
			exibir(&f);
		}
		else if(r==3){
			remover(&f);
		}
		else if(r==4){
			tornar_vazia(&f);
		}
		else if(r==5){
			media(&f);
		}
		else if(r==6){
			pares(&f);
		}
		else if(r==7){
			aparece(&f);
		}
		else if(r==8){
			fila2(&f, &f2);
		}
		system("pause");
		system("cls");
		r=menu();
	}
}






