#include <stdio.h>

int main (void)

{


	int i = 1; //inicia em 1//
	
	printf("\nApresentar os números divísiveis por 4 menores que 200! \n");
	

	while(i < 200) //menor que 200//

	{
	if (i % 4 == 0) //resto dividido por 4 = 0//
	printf("%d\n",i);//imprimir i em decimal//
	i = i + 1; //imprimir de 1 a 200 somente os divisiveis por 4//

			
	}
	return 0;
}
