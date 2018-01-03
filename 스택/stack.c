#include<stdio.h>
#include<string.h>


int push(int number);
void top();
void size();
void pop();
void empty();
int stack[100000];
int stacknum = 0;
int main()
{
	int numcase, number;
	char commend[6];
	scanf_s("%d", &numcase);
	for (int j = 0; j < numcase; j++)
	{
		stack[j] = 0;
	}

	for (int i = 0; i < numcase; i++)
	{
		scanf_s("%s", commend, sizeof(commend));
		if (commend[0] == 'p'&& commend[1] == 'u')
		{
			scanf_s("%d", &number);
		}


		if (commend[0] == 'p' && commend[1] == 'u')
		{
			push(number);
		}
		else if (commend[0] == 'e')
		{
			empty();
		}
		else if (commend[0] == 's')
		{
			size();
		}
		else if (commend[0] == 't')
		{
			top();
		}
		else if (commend[0] == 'p'&& commend[1] == 'o')
		{
			pop();
		}
		else
			printf("erro commend\n");

	}
	return 0;
}

int push(int number)
{
	stacknum++;
	stack[stacknum] = number;

	return number;
}
void pop()
{
	if (stacknum == 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", stack[stacknum]);
		stack[stacknum] = 0;

		stacknum -= 1;
	}
}
void size()
{
	int i, count = 0;
	for (i = 1; i < stacknum+1; i++)
	{
		if (stack[i] != 0)
		{
			count++;
		}
	}
	printf("%d\n", count);

	
}
void empty()
{
	if (stack[stacknum] == 0)
	{
		printf("1\n");
	}
	else
		printf("0\n");
}
void top()
{

	int a = stacknum;
	if (a == 0)
	{
		printf("-1\n");
	}
	else
	{

		printf("%d\n", stack[a]);
	}
}
