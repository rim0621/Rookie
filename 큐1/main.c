#include<stdio.h>

#define MAX 10001

int push(int *p, int number, int point);
int pop(int *p, int point);
void size(int point);
void empty(int point);
void front(int *p,int point);
void back(int *p, int point);

int main()
{
	int num;
	int queue[MAX];
	
	char commend[6];
	int point = 0;
	int number;
	scanf_s("%d", &num);


	for (int i = 0; i < num; i++)
	{
		scanf_s("%s", commend, sizeof(commend));
		//배열 문자열 한번에받기!!!!!
		if (commend[1] == 'o')
		{ //두번째글자가 다 다르므로 [1]로...
			point = pop(&queue, point);
		}
		else if (commend[1] == 'u')
		{
			scanf_s("%d", &number);
			point = push(&queue, number, point);
		}
		else if (commend[1] == 'i')
		{
			size(point);
		}
		else if (commend[1] == 'm')
		{
			empty(point);
		}
		else if (commend[1] == 'r')
		{
			front(&queue,point);
		}
		else if (commend[1] == 'a')
		{
			back(&queue, point);
		}
		else printf("erro commend\n");

	}
	return 0;
}

int push(int *p, int number, int point)
{

	p[point] = number;

	return (point + 1);
}
int pop(int *p, int point)
{
	if (point == 0)
	{
		printf("-1\n");
		return point;
	}

	else
	{
		printf("%d\n", p[0]);
		for (int i = 0; i < point; i++)
		{
			p[i] = p[i + 1];
		}
	}
	return (point - 1);
}
void size(int point)
{
	printf("%d\n", point);
}
void empty(int point)
{
	if (point == 0)
	{
		printf("1\n");
	}
	else
		printf("0\n");
}
void front(int *p,int point)
{
	if (point == 0)
	{
		printf("-1\n");
	}
	else
	printf("%d\n", p[0]);
}
void  back(int *p, int point)
{
	if (point == 0)
	{
		printf("-1\n");
	}
	else
	printf("%d\n", p[point - 1]);
}