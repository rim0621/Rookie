#include<stdio.h>

int main()
{
	int data[10] = { 3, 4, 2, 1, 8, 9, 6, 7, 0, 5 };
	int n = 10;
	int i, j, remember;
	for (i = 1; i < n; i++)
	{
		remember = data[(j = i)];
		while (--j >= 0 && remember < data[j])
			data[j + 1] = data[j];
		data[j + 1] = remember;
	}
		for (int k = 0; k < 10; k++)
		{
			printf("%d", data[k]);
		}
}