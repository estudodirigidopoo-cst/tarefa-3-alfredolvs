#include <stdio.h>

int main (void)

{


	int TABUADA,t = 0;
	
	printf("\nQual tabuada deseja calcular?:  ");
	scanf("%d", &TABUADA);

	
		
		
		for (t = 1; t <=10; t++){



		printf("Mostrando a tabuada: %d X %d =  %d\n", TABUADA, t, TABUADA * t);
	}
		
	
	return 0;
}
