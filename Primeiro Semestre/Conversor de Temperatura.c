#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese_Brazil");
	float C,F;
	
	printf("----- CONVERSOR DE TEMPERATURA ----\n\n");
	printf("Informe a unidade em �C: ");
	scanf("%f", &C);
	
	F = (9*C+160)/5;
	
	printf("%0.2f� Celsius Equivale a %0.2f� Fahrenheit", C,F);
	
	return 0;
}
