#include <stdio.h>

int main (void)

{

	int I;
	printf("\nApresentando a sequencia de números ímpares entre 0 e 20\n");

	
		
		for (I = 0; I<=20; I++)
		
		
		if (I % 2 != 0)

		printf("Os números ímpares de 0 a 20 são = %2d\n", I);
	
		else
		printf(" ");
		
	
	
	return 0;
}
