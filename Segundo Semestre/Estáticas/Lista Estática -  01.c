#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 10

struct Lista {
	int n;
	int mat[m];
	float nota[m];
};

struct Ap {
	int nA;
	int matA[m];
	float notaA[m];
};

void inicialista(struct Lista *L){
	L->n = 0;
}

//1 - INSERIR NO FINAL DA LISTA
int inserirFinal(struct Lista *L, int mat2, float nota2, int tam, int max){
	printf("\t------- INSERIR NO FINAL DA LISTA -------\n\n");
	if (L->n > max-1){
		printf("\t\tLISTA CHEIA!\n\n");
		system ("pause");
	}
	else {
		printf("INFORME A MATRÍCULA: ");
		scanf("%d", &mat2);
		printf("INFORME A NOTA: ");
		scanf("%f", &nota2);
		system ("cls");
		L->mat[L->n] = mat2;
		L->nota[L->n] = nota2;
		L->n++;
	}	
}

//3 - LOCALIZAR O NÓ QUE CONTÉM UMA DETERMINADA MATRÍCULA
void PosNoMat (struct Lista *L){
	int x, y, Lmat;
	printf("\t------- LOCALIZAR NÓ -------\n\n");
	printf("LOCALIZAR NÓ PELA MATRICULA: ");
	scanf("%d", &Lmat);
	y = 0;
	for (x=0;x<m;x++){
		if (L->n == 0){
			printf("\n\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (y[L->mat] == Lmat){
			printf("\nNÓ: %d\n\n", y);
			break;
		}
		else if (y == m-1){
			printf("\n\tERRO - NÃO ACHEI ESSA MATRÍCULA!\n\n");
		}
		y++;
	}
}

//4 - VALOR DO NÓ
void ValordoNo (struct Lista *L){
	int x, y, Vno;
	printf("\t------- VALOR DO NÓ -------\n\n");
	printf("MOSTRAR O VALOR DO SEGUINTE NÓ: ");
	scanf("%d", &Vno);
	y = 0;
	for (x=0;x<m;x++){
		if (L->n == 0){
			printf("\n\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (Vno == y){
			printf("\n\tMATRÍCULA: %d\n", y[L->mat]);
			printf("\tNOTA\t:  %.1f\n\n", y[L->nota]);
			break;
		}
		else if (y > L->n){
			printf("\n\tNÃO ACHEI!\n\n");
			break;
		}
		y++;
	}
}

//5 - EXLUIR O K_ÉSIMO NÓ DA LISTA
int ExKes (struct Lista *L){
	int x, y, y1, k, aux;
	float aux2;
	printf("\t------- EXCLUIR NÓ -------\n\n");
	printf("INFORME QUAL NÓ DESEJA EXCLUIR: ");
	scanf("%d", &k);
	if (k > L->n-1){
		printf("\n\tERRO - IMPOSSÍVEL EXLUIR!\n\n");
		return 0;
	}
	for(x=0;x<=L->n;x++){
		if (L->n == 0){
			printf("\n\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (k == x){
		printf("\n\tITEM EXLUIDO!\n\n");
			for (y=k;y<=L->n;y++){
				if (y >= L->n) y1=y;
				else y1=y+1;
				aux = y1[L->mat];
				aux2 = y1[L->nota];
				y[L->mat] = aux;
				y[L->nota] = aux2;
			}
		}
	}
	L->n--;
}

//6 - MOSTRA A MAIOR NOTA E O NÚMERO DA MAT
void MaiorN_e_Num_Mat (struct Lista *L){
	int x=0, mat;
	float maior=0, aux;
	printf("\t------- MAIOR NOTA E SUA MATRÍCULA -------\n\n");
	if (L->n == 0)
		printf("\t\t  ERRO - LISTA VAZIA!\n\n");
	for (x=0;x<L->n;x++){
		if (x[L->nota] > maior){
			maior = x[L->nota];
			mat = x[L->mat];
		}
	}
	if (L->n != 0){
		printf("\t\t    ------------------\n");
		printf("\t\t      MAIOR NOTA: %.1f\n", maior);
		printf("\t\t      MATRÍCULA:  %d\n", mat);
		printf("\t\t    ------------------\n\n");
	}
}

//7 - INSERIR UM NOVO NÓ APÓS O K_ÉSIMO NÓ DA LISTA		
void Inser_K_esimo (struct Lista *L){
	int x, y, y1, k, aux;
	float aux2=0;
	printf("\t------- INSERIR NOVO NÓ -------\n\n");
	printf("INFORME EM QUAL NÓ DESEJA INSERIR: ");
	scanf("%d", &k);
	printf("\n");
	for(x=0;x<=L->n;x++){
		if (L->n == 0){
			printf("\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (x == k && L->n < m){
			for (y=L->n-1;y>k;y--){
				if (y==0) y1=y;
				y1=y+1;
				aux = y[L->mat];
				aux2 = y[L->nota];
				y1[L->mat] = aux;
				y1[L->nota] = aux2;
			}
				k+=1;
				L->n++;
				printf("INFORME A MATRÍCULA: ");
				scanf("%d", &k[L->mat]);
				printf("INFORME A NOTA: ");
				scanf("%f", &k[L->nota]);
				break;
		}
		else if (L->n == m) {
			printf("\n\tERRO - LISTA CHEIA!\n\n");
			break;
		}
		if (k+1 > L->n){
			printf("\n\tERRO - NÓ NÃO ENCONTRADO\n\n");
			break;
		}
	}
	if (k>m-1)
		printf("\tERRO - ESPAÇO APENAS PARA %d\n\n", m-1);
}

//8 - ORDENAR A LISTA
void ordem (struct Lista *L){
	int x, i, j, aux, aux2;
	printf("\t  ------- LISTA ORDENADA -------\n\n");
	if (L->n == 0){
		printf("\t\tERRO - LISTA VAZIA!\n\n");
	}
	else {
		for (i=0;i<L->n;i++){
			for(j=i;j<L->n;j++){
				if (L->mat[i]<L->mat[j]){
					aux = L->mat[i];
					aux2 = L->nota[i];
					L->mat[i] = L->mat[j];
					L->nota[i] = L->nota[j];
					L->mat[j] = aux;
					L->nota[j] = aux2;
				}
			}
		}
			for (x=0;x<L->n;x++){
				
			printf("\t\t------------------\n");
			printf("\t\t  MATRÍCULA: %d\n", x[L->mat]);
			printf("\t\t  NOTA      :%.1f\n", x[L->nota]);
			printf("\t\t------------------\n\n");
			}
	}
}

//9 - SUBCADEIA DE APROVADOS
void Aprovados (struct Ap *A, struct Lista *L){
	int x=0, ap=0;
	printf("\t     ------- APROVADOS -------\n\n");
	for	(x=0;x<L->n;x++){
		if (x[L->nota] >= 7.0){
			x[A->matA] = x[L->mat];
			x[A->notaA] = x[L->nota];
			printf("\t\t------------------\n");
			printf("\t\t  MATRÍCULA: %d\n", x[A->matA]);
			printf("\t\t  NOTA      :%.1f\n", x[A->notaA]);
			printf("\t\t------------------\n\n");
			ap++;
		}
	}
	if (ap == 0){
		printf("\t\t NENHUM APROVADO!\n\n");
	}
}

//10 - MOSTRAR TODOS OS ELEMENTOS
void exibir(struct Lista *L){
	printf("\t------- TODOS OS ELEMENTOS -------\n\n");
	int x;
	if (L->n == 0)
		printf("\t\t   LISTA VAZIA!\n\n");
	else {
		for(x=0;x<L->n;x++){
			printf("\t\t------------------\n");
			printf("\t\t MATRÍCULA %d: %d\n", x, x[L->mat]);
			printf("\t\t NOTA \t   %d: %.1f\n", x, x[L->nota]);
			printf("\t\t------------------\n\n");
		}
	}
}

// MENU
int menu(){
	int r;
	printf("--- MENU LISTA ---\n\n");
	printf("0 - SAIR\n");
	printf("1 - INSERIR NO FINAL DA LISTA\n");
	printf("2 - DETERMINAR O NÚMERO DE NÓS DE UMA LISTA\n");
	printf("3 - LOCALIZAR O NÓ QUE CONTEM UMA DETERMINADA MATRÍCULA\n");
	printf("4 - MOSTRA O VALOR DE UM DETERMINADO NÓ\n");
	printf("5 - EXCLUIR O K_ÉSIMO NÓ DA LISTA\n");
	printf("6 - MOSTRAR A MAIOR NOTA DA LISTA E O NÚMERO DA MATRÍCULA DO ALUNO\n");
	printf("7 - INSERIR UM NOVO NÓ APÓS O K_ÉSIMO NÓ DA LISTA\n");
	printf("8 - ORDENAR A LISTA\n");
	printf("9 - ALUNOS APROVADOS\n");
	printf("10 - MOSTRAR TODOS OS ELEMENTOS DA LISTA\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

main (){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int r, mat2, tam=0, max=m;
	float nota2;
	struct Lista L;
	struct Ap A;
	inicialista(&L);
	
	r=menu();
	
	while (r!=0){
		system ("cls");
		if (r==1){
			inserirFinal(&L, mat2, nota2, tam, max);
		}
		else if (r==2){
			printf("\t------- QUANTIDADE DE NÓS -------\n\n");
			printf("DETERMINE A QUANTIDADE DE NÓS: ");
			scanf("%d", &tam);
			if (tam == 0) max=m-1;
			else max=tam;
		}
		else if (r==3){
			PosNoMat(&L);
			system ("pause");
		}
		else if (r==4){
			ValordoNo(&L);
			system ("pause");
		}
		else if (r==5){
			ExKes(&L);
			system ("pause");
		}
		else if (r==6){
			MaiorN_e_Num_Mat(&L);
			system ("pause");
		}
		else if (r==7){
			Inser_K_esimo(&L);
			system ("pause");
		}
		else if (r==8){
			ordem(&L);
			system("pause");
		}
		else if (r==9){
			Aprovados(&A, &L);
			if (L.n == 0){
			printf("\t\tERRO - LISTA VAZIA!\n\n");
			}
			system ("pause");
		}
		else if (r==10){
			exibir(&L);
			system ("pause");
		}
		system("cls");
		r=menu();	
	}
	return 0;
}
