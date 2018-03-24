#include <stdio.h>

 //Usando Escolha/Caso

int main (){

    int num;

    printf ("Informar Um Numero Inteiro Entre 1-5: ");
    scanf ("%i", &num);

    switch (num) {
        case 1:
            printf ("\nPrimeiro\n");
            break;
        case 2:
            printf ("\nSegundo\n");
            break;
        case 3:
            printf ("\nTerceiro\n");
            break;
        case 4:
            printf ("\nQuarto\n");
            break;
        case 5:
            printf ("\nQuinto\n");
            break;
        default:
                printf ("Opcao Invalida");
                break;


    }


    return 0;
}
