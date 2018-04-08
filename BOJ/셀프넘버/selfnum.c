#include<stdio.h>




int main()
{
	int table[10001];

	for (int i = 1; i <= 10000; i++)
	{
		table[i] = i;
	}
	int A = 0, B = 0, C = 0, D = 0, E = 0;

	for (int i = 1; i <= 10000; i++)//자리수 구하기
	{
		A = i / 10000;
		B = (i / 1000) % 10;
		C = (i / 100) % 10;
		D = (i / 10) % 10;
		E = i % 10;
		table[i + A + B + C + D + E] = 0;

	}
	for (int i = 1; i <= 10000; i++)
	{
		if (table[i] != 0)
		{
			printf("%d\n", table[i]);
		}
	}
	return 0;
}