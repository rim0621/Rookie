#include<stdio.h>


int combination(int *p1,int *p2);

int main()
{
	int  n;
	int  x;
	double result;
	printf("n & x input: ");
	scanf_s("%d %d", &n, &x);
	int *p1 = &n,*p2=&x;
	result=combination(&n,&x);
	printf("%f\n",result);

	return 0;
}

 int combination(int *p1,int *p2 )
{
	unsigned long long up=1, down=1,n1=*p1;
	if (*p1 - *p2 >= *p2)
	{
		for (int i = 0; i < *p1 -(*p1 - *p2); i++)
		{
			up *= n1;
			n1--;
		}
		for (int i = 1; i <= *p2; i++)
		{
			down *= i;
		}
	}
	else
	{
		for (int i = 0; i < *p1 - *p2; i++)
		{
			up *= n1;
			n1--;
		}
		for (int i = 1; i <= *p1 - *p2; i++)
		{
			down *= i;
		}
	}
	return up / down;
}