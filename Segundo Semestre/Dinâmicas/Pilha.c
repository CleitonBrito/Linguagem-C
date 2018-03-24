#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>

typedef struct no{
	float info;
	struct no* anterior;
} No;

typedef struct {
	No* topo;		
}Pilha;

Pilha* cria (void){
	Pilha *p;
	p = (Pilha*)malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

//Inserir o elemento no topo
int elementos=0;
No* push (Pilha *p, float v){
	No* aux;
	aux = (No*) malloc(sizeof(No));
	aux->info = v;
	aux->anterior = p->topo;
	p->topo = aux;
	
	return aux;
}

int vazia (Pilha *p){
	return (p->topo == NULL);
} 

//Remove o elemento no topo
float pop (Pilha *p){
	float v;
	No* aux;
		if(vazia(p)){
			printf("Pilha Vazia\n\n");
			return 0;
		}
		else{
			v = p->topo->info;
			aux =  p->topo;
			p->topo = aux->anterior;
			free(aux);
			printf("REMOÇÃO CONCLUIDA\n\n");
			return v;
		}
}

//Topo
void topo(Pilha *p){
		printf("TOPO: %.1f\n\n", p->topo->info);
}

void esvaziar (Pilha *p){
	No *q = p->topo;
		while (q!=NULL){
			No *t = q->anterior;
			free(q);
			q = t;
		}
	p->topo = NULL;
}

void imprime (Pilha *p){
	No *q = p->topo;
	
		for(int x=0; x < elementos; x++){
			printf("%.1f\n", q->info);
			q=q->anterior;
		}
	printf("\n");
}

void libera (Pilha *p){
	No* q = p->topo;
	while (q!=NULL){
		No* t = q->anterior;
		free(q);
		q = t;
	}
	free(p);
}

int menu(){
	int r;
	printf("--- MENU PILHA ---\n");
	printf("1 - EMPILHAR\n");
	printf("2 - DESEMPILHAR\n");
	printf("3 - EXIBIR TOPO\n");
	printf("4 - EXIBIR PILHA\n");
	printf("5 - ESVAZIAR A PILHA\n");
	printf("6 - LIBERAR\n");
	printf("7 - SAIR\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

main (){
	int r;
	Pilha Pi;
	cria();
	
	setlocale(LC_ALL, "");
	
	r=menu();
	while (r!=7){
		system("cls");
		if (r==1){
			float valor;
			printf("Informe o valor para inserir: ");
			scanf("%f", &valor);
			push(&Pi, valor);
		}
		if(r==2){
			pop(&Pi);
		}
		if(r==3){
			topo(&Pi);
		}
		if(r==4){
			imprime(&Pi);
		}
		if(r==5){
			libera(&Pi);
		}
		system("pause");
		system("cls");
		r=menu();
	}
}


