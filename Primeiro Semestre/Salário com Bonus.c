// Ajuste no Salário Com Base Em Ser Solteiro e Ter Filhos //

#include <stdio.h>

int main (){

int Situacao;
float Salario;
float SalBonus;

    printf("Qual Seu Salario Fixo? ");
    scanf("%f", &Salario);
    printf("--------------------------\n");
    printf("    Bonus Natalino\n");
    printf("--------------------------\n");
    printf("\nQual Sua Situacao Atual?\n");
    printf("[1] Solteiro\n");
    printf("[2] Casado Com Filho\n");
    printf("[3] Casado Sem Filho\n");
    scanf("%i", &Situacao);

            if (Situacao == 1){
            printf("\nVoce Nao Recebera o Bonus.\n\nSeu Salario Continuara %0.2f\n", Salario);
     }  else if (Situacao == 2) {
                printf("\nVoce Recebera o Bonus de 20 Por Cento\n");
                SalBonus = Salario*20/100;
                SalBonus = Salario+SalBonus;
                printf("\nSalario Com Bonus: %0.2f\n", SalBonus);
      }  else if (Situacao == 3) {
                printf("\nVoce Recebera o Bonus de 15 Por Cento\n");
                SalBonus = Salario*15/100;
                SalBonus = Salario+SalBonus;
                printf("\nSalario Com Bonus: %0.2f\n", SalBonus);
           } else
           		printf("\nOpcao Invalida\n");
	

return 0;
}
