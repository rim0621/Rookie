#include<stdio.h>

int main()
{
	int min, max, gap;
	int sum = 0, count = 1;
	scanf_s("%d", &min);
	scanf_s("%d", &max);
	int c = 0;
	gap = max - min;
	
	if (min == max)
	{
		printf("-1\n");
		return 0;
	}

	int *prime = (int*)malloc(sizeof(int)*1250);
	int *buffer = (int*)malloc(sizeof(int) * 1250);
	prime[0] = 2;
	for (int i = 2; i <= max; i++)//소수구하기
	{
		c = 0;
		for (int j = 0; j < count; j++)
		{			
			if (i%prime[j] == 0)
			{
				break;
			}
			else
			{
				c++;
			}
		}
		if (c == count)
		{
			prime[count] = i;
			count++;
		}
	}

	//최소값과 합
	int buffer_count=0;
	for (int i = 0; i < 1250; i++)
	{
		buffer[i] = -1;
	}
	for (int i = 0; i < count; i++)
	{
		if (prime[i] >= min && prime[i] <= max)
		{
			sum += prime[i];
			buffer[buffer_count] = prime[i];
			buffer_count++;
		}
	}
	if (buffer[0] == -1)//소수가 없을때 
	{
		printf("-1\n");
		return 0;
	}
	
	printf("%d\n", sum);
	printf("%d", buffer[0]);
	free(prime);
	return 0;
}