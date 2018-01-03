#include<stdio.h>

int main() {
	int A, B;
	int mok, rest;
	
	scanf_s("%d %d", &A, &B);

	rest = A;
	mok = A / B;
	printf("%d", mok);
	printf(".");
	int i = 0;
	while (i < 10)
	{
		rest = rest%B;
		rest = rest * 10;
		printf("%d", rest / B);
		i++;
	}
	return 0;
}