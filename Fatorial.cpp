#include <stdio.h>

int main (){

    int fat;
    int resul = 1;

    printf ("Informe o Fatorial [!] ");
    scanf ("%i", &fat);

    for (; fat >= 1; --fat){
        resul = resul * fat;
    }

    printf ("\nO Fatorial e %i\n",resul);

    return 0;
}
