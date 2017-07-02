/*에라토스테네스 O(n*logn*logn)*/
#include<stdio.h>
#include<math.h>
int main()
{
	int m = 0, n = 0;
	scanf_s("%d %d", &m, &n);
	int *prime = (int*)malloc(sizeof(int)*n+4);//한개 더 잡아야됨
	
	if (m == 1)
	{
		m += 1;
	}

	for (int i = m; i <= n; i++)
	{
		prime[i] = 0;
	}
	for (int i = 2; i < n ; i++)
	{
		for (int j = i * 2; j <= n; j+=i)
		{
			prime[j] = 1;
		}
	}
	//int count=0;
	for (int i = m; i <= n; i++)
	{
		if (prime[i] == 0)
		{
			printf("%d\n", i);
		//	count++;
		}
	}
	//printf("%d", count); //2~1000000>> 78498
	return 0;
}