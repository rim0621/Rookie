#include<stdio.h>
void finddwarf(int *h);

int main()
{

	int height[9];
	int temp;

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &height[i]);
	}
	finddwarf(&height);
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			temp = height[i];
			if (height[i] > height[j])
			{
				height[i] = height[j];
				height[j] = temp;

			}
		}
	}
	for (int i = 2; i < 9; i++)
	{
		printf("%d\n", height[i]);
	}

	return 0;
}


void finddwarf(int *h)
{
	int sum = 0, remain = 0;

	for (int i = 0; i < 9; i++)
	{
		sum += h[i];
	}
	remain = sum - 100;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (h[i] + h[j] == remain)
			{
				h[i] = h[j] = 0;
				return 0;
			}
		}
	}
}