#include <stdio.h>

int main(){

    char sexo,olhos,cabelo;
    int idade,maiorIdade,cont=0,i;
	printf("\tPRECISAMOS ENCONTAR MULHERES\n\tQUE TENHAM MAIS DE 18 ANOS E\n\t MENOS DE 35 ANOS, COM OLHOS\n\t   VERDES E CABELOS LOIROS.\n\n");
    for (i=0;i<=1;i++){
        printf("Sexo: (F)eminino ou (M)asculino: ");
        scanf("%c",&sexo);
        fflush(stdin);
        printf("\n");
        printf("Cor dos olhos: A(zuis), (V)erdes ou (C)astanhos: ");
        scanf("%c",&olhos);
        fflush(stdin);
        printf("\n");
        printf("Cor dos cabelos: (L)ouros,(C)astanhos ou (P)retos: ");
        scanf("%c",&cabelo);
        fflush(stdin);
        printf("\n");
        printf("Idade: ");
        scanf("%d",&idade);
        fflush(stdin);
        printf("\n");

        //Como não podemos inicializar a variável maiorIdade com 0, atribuo a primeira idade digitada como a maior de todas
        //Essa condição só será executada uma vez na primeira iteração do loop quando i = 0
        if (i==0){
            maiorIdade = idade;
        }
        //Calculando a maior idade do grupo
        if (idade > maiorIdade){

            maiorIdade = idade;
        }

        //Verificando se existe alguma mulher que atenda aos requisitos
        //Caso exista, basta apenas guardar a quantidade numa variável contadora
        if((sexo=='F') && (idade > 18) && (idade <35) && (olhos=='V') &&(cabelo=='L')){
            cont++;
        }
    }

    printf("A maior idade eh: %d",maiorIdade);
    printf("A quantidade de mulheres que atendem aos requisitos eh %d",cont);

}
