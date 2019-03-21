#include <stdio.h>

int main(void)

{

int a=0,b=1, i;

	for (i =1; i <= 15; i ++)
	{
	
	a = a + b;
	b = a - b ;
	
	printf("\nA série de Fibonacci para os primeiros 15 termos é: %d\n", a);
}
return 0;

}
