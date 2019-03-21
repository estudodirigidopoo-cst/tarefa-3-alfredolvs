#include <stdio.h>

int main (void)

{


	int i = 0, n=3,p; //inicia em 0 o expoente//
	
	printf("\nApresentar a potencia de 3 variando o expoente de 0 a 9! \n");
	

	while(i <= 9) //menor igual a 9//

	{
	
	
	p = p * n; //potencia//
	i = i + 1; //imprimir a potencia de 3 variando o expoente de 0 a 9//

	}
	printf("o valor de %d elevado de 0 a 9 = %d\n",n,p ); //imprimir i em decimal e faz ao cubo de cada termo//
	

			
	
	return 0;
}
