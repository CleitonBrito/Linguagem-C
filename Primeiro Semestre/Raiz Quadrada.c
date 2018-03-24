#include <stdio.h>
#include <math.h>

main(){
	
	float N1, N2, quad, raizq;
	
	printf("--- RAIZ QUADRADA ---");
	printf("Informe um numero: ");
	scanf("%f", &N1);
	printf("Informe outro numero: ");
	scanf("%f", &N2);
	
	if (N1 < N2){
		quad = N1*N1;
		raizq = sqrt (N2);
		printf("\nQuadrado: %.3f\nRaiz Q: %.3f", quad, raizq);
	} else {
		quad = N2*N2;
		raizq = sqrt (N1);
		printf("\nQuadrado: %.3f\nRaiz Q: %.3f", quad, raizq);
    }
	
	
	return 0;
}
