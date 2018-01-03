#include<stdio.h>

int main()
{
	int a, b, c;
	int mul = 1;
	int num[10], count[10] = {0,};
	
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	mul = a*b*c;



	for (int i = 0; i < 10; i++)
	{
		if (mul != 0)
		{
			num[i] = mul % 10;
			mul /= 10;
		}
	}
	for (int j = 0; j < 10; j++)
	{
		if (num[j] == 0)
		{
			count[0]++;
		}
		else if (num[j] == 1)
		{
			count[1]++;
		}
		else if (num[j] == 2)
		{
			count[2]++;
		}
		else if (num[j] == 3)
		{
			count[3]++;
		}
		else if (num[j] == 4)
		{
			count[4]++;
		}
		else if (num[j] == 5)
		{
			count[5]++;
		}
		else if (num[j] == 6)
		{
			count[6]++;
		}
		else if (num[j] == 7)
		{
			count[7]++;
		}
		else if (num[j] == 8)
		{
			count[8]++;
		}
		else if (num[j] == 9)
		{
			count[9]++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	return 0;
}