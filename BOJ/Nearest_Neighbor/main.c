#include<stdio.h>

int min(int number);
int find_loop(int now,int *p);

int graph[5][5] = { { NULL,5,4,6,7 },{ 5,NULL,7,8,6 },{ 4,7,NULL,3,4 },{ 6,8,3,NULL,5 },{ 7,6,4,5,NULL } };//weight
int  SumWeight = 0;

int main()
{
	
	int node_number[6] = { 0, }; //path array
	int *p = node_number;
	int now = 0;
	char current;
	
	for (int i = 1; i < 5; i++)
	{
		now = min(now);
		if (find_loop(now, node_number))
		{
			node_number[i] = now;
		}
		else 
			i--;
	}
	printf("Path =  ");
	for (int i = 0; i <= 5; i++)  // change output of number as word
	{
		if (node_number[i] == 0)
			current = 'a';
		else if (node_number[i] == 1)
			current = 'b';
		else if (node_number[i] == 2)
			current = 'c';
		else if (node_number[i] == 3)
			current = 'd';
		else if (node_number[i] == 4)
			current = 'e';

		printf("%c  ",current );
	}
	printf("\n");
	printf("Weight = %d\n",SumWeight);
	return 0;
}
int min(int number) 
{
	int min_node=0;
	int min=999;
	for (int i = 0; i < 5; i++)
	{
		if (graph[number][i] !=NULL && min > graph[number][i])
		{
			min = graph[number][i];
			min_node = i;
		}
	}
	SumWeight += graph[number][min_node];
	graph[number][min_node] = NULL;
	graph[min_node][number] = NULL;
	return min_node;
}
int find_loop(int now,int *p)
{
	for (int i = 0; i < 5; i++)
	{
		if (p[i] == now)
		{
			return 0;
		}
		else if (now == 0)
		{
			return 1;
		}
	}
	return 1;
}