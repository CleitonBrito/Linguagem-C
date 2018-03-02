#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	char nome[50];
	float c, media1, media2, media_final, final;
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	printf("\t\t*** MEDIA PONDERADA ***\n\n");
	printf("\tCom Este Programa Meu Caro Amigo\n\t  Você Irá Conseguir Descobrir\n\tSe Ficou De Recuperação Naquela\n\t Linda Disciplina, Se Reprovou \n\t  o Semestre ou Se Vais Curtir \n\t\tSuas Férias.\n\n");
	printf("OBS.: Utilize Vírgulas Para Separar o Decimal\n\n\n\n\n\n");
	system ("pause");
	system ("cls");
	printf("Informe Seu Nome: ");
	scanf("%s", &nome);
	system ("cls");
	printf("%s Informe Sua Primeira Média: ", nome);
	scanf("%f", &media1);
	printf("%s Informe Sua Segunda Média: ", nome);
	scanf("%f", &media2);
	media_final=(media1+media2)/2;
	printf("\n\t\tMEDIA FINAL: %.1f\n", media_final);
	final=(50-(media_final*7))/3;
		if (media_final >= 3.5 && media_final < 7){
			printf("\n\tAcabei de analizar, e acabei de \n\t  perceber que parece que tem\n\t gente precisando estudar mais.\n\t\tNão é Sr(a) %s?\n\n\t     Irá Precisar de %.1f\n\t     na recuperação final.", nome, final);
	}
	else if(media_final < 3.5){
		printf("\n\tNão pude fazer nada por você\n\tPrecisará repetir o semestre.");
	}
	else {
		printf("\n\t\t      Meus Parabéns!\n\t\tPróximo semestre lhe espera.\n\t\t Vais Passar Suas Férias\n\t\tTomando Suco de Laranja.\n");
	}
	
	printf("\n\n");
	system ("pause");

	return 0;
}
