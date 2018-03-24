#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
	float salario;
	struct no* prox;
}tno;
typedef tno* tlista;

void criar (tlista *L){
	*L = NULL;
}
tno* aloca(){
	tlista p;
	p = (tlista)malloc(sizeof(tno));
}

int inserir(tlista *L){ // 1
	tlista novo;
	float info;
	
	printf("INFORME O VALOR: ");
	scanf("%f", &info);
	novo = aloca();
	if(novo==NULL) return 0;
	novo->salario = info;
	novo->prox = *L;
	*L = novo;
	return 1;
}
void imprime(tlista L){ //2
	tlista p = L;
	
	printf("------- EXIBINDO --------\n\n");
	while(p != NULL){
		printf("%.2f\n", p->salario);
		p = p->prox;
	}
	printf("\n");
}
void maiores(tlista L){ //3
	float k;
	int x=0;
	tlista p = L;
	
	printf("INFORME UM VALOR: ");
	scanf("%f", &k);
	
	while (p!=NULL){
		if (p->salario>k)x++;
		p = p->prox;
	}
	printf("\nExistem %d valores maiores que %.2f\n", x, k);
}
void remover(tlista *L){ //4
	tlista del;
	
	if(*L == NULL){
		printf("REMOÇÃO NULA");
		exit(1);
	}
	
	del = *L;
	*L = del->prox;
	free(del);
	printf("---- REMOÇÃO CONCLUÍDA! -----\n\n");
}
void endMemSal(tlista *L){ //5
	float sal;
	tlista p = *L;
	
	printf("INFORME UM SALÁRIO: ");
	scanf("%f", &sal);
	
	if(p->salario == sal){
		printf("\nEnderoço de memória do salário %.2f: %d\n\n", p->salario, &p->salario);
	}
	else 
		printf("\n---- SALÁRIO NÃO ENCONTRADO NA LISTA ---\n\n");
}
void RepeatSal(tlista *L){ //6
	int x=0;
	float sal;
	tlista p = *L;
	
	printf("INFORME UM SALÁRIO: ");
	scanf("%f", &sal);
	
	while (p != NULL){
		if(p->salario == sal)x++;
			p=p->prox;
	}
	printf("\nO salário %.2f aparece %d vez(es) na lista.\n\n", sal, x);
}

float Ordenar (tlista *L){ //7
	tlista p = *L;
	int i=0, j,tam=0;
	float auxsal;

	while(p!=NULL){
		p=p->prox;
		tam++;
	}
	int a=tam;
	float aux[tam];
	
	p = *L;
	while(p!=NULL){
		aux[tam] = p->salario;
		p=p->prox;
		tam--;
	}
	for(i=0; i<= a; i++){
		for(j=i;j<=a;j++){
			if(aux[i] < aux[j]){
				auxsal = aux[i];
				aux[i] = aux[j];
				aux[j] = auxsal;
			}
		}
	}
	printf("--- ORDENADO ---\n\n");
	for(i=0;i<a;i++){
		printf("%.2f\n", aux[i]);
	}
}


void esvaziar(tlista *L){ //8
	tno *ndel, *nextno = *L;
	
	while(nextno != NULL){
		ndel = nextno;
		nextno = nextno->prox;
		free(ndel);
	}
	criar(L);
	printf("--- LISTA VAZIA! ---\n\n");
}
int MaiorMenor(tlista *L){ //9
	tlista p = *L;
	if(p==NULL){
		printf("--- LISTA VAZIA ---\n\n");
		return 0;
	} 
	float menor = p->salario, maior = p->salario;
	
	
	while(p!=NULL){
		if(p->salario<menor){
			menor = p->salario;
			
		}else if(p->salario>maior){
			maior = p->salario;
		}
		p=p->prox;
	}
	printf("MAIOR: %.2f\n", maior);
	printf("MENOR: %.2f\n\n", menor);
}

int menu(){
	int r;
	
	printf("--- MENU LISTA ---\n\n");
	printf("0 - SAIR\n");
	printf("1 - INSERIR\n");
	printf("2 - EXIBIR A LISTA\n");
	printf("3 - CONTAR VALORES MAIORES QUE K\n");
	printf("4 - REMOVER\n");
	printf("5 - MOSTRAR  O ENDEREÇO DE MEMÓRIA QUE CONTÉM UM DETERMINADO SALÁRIO\n");
	printf("6 - CONTAR QUANTAS VEZES O SALÁRIO K APARECE NA LISTA\n");
	printf("7 - ORDENAR A LISTA DE FORMA DECRESCENTE\n");
	printf("8 - ESVAZIAR A LISTA\n");
	printf("9 - MOSTRAR O MAIOR E O MENOR SALÁRIO DA LISTA\n\n");
	printf("DIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

main (){
	int r;
	tlista Lista;
	criar(&Lista);
	setlocale (LC_ALL, "");
	r=menu();
	
	while(r!=0){
		system("cls");
		if(r==1){
			inserir(&Lista);
		}
		else if(r==2){
			imprime(Lista);
		}
		else if(r==3){
			maiores(Lista);
		}
		else if(r==4){
			remover(&Lista);
		}
		else if(r==5){
			endMemSal(&Lista);
		}
		else if(r==6){
			RepeatSal(&Lista);
		}
		else if(r==7){
			Ordenar(&Lista);
		}
		else if(r==8){
			esvaziar(&Lista);
		}
		else if(r==9){
			MaiorMenor(&Lista);
		}
		system("pause");
		system("cls");
		r=menu();
	}
	
}
