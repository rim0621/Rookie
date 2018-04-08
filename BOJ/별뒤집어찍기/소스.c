#include<stdio.h>

int main()
{
	int N,i,j,k;
	scanf_s("%d", &N);

	for ( i = 0; i < N; i++)
	{
		for (k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (j = N; i < j; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}