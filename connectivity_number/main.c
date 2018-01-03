#include<stdio.h>

int rm_edge(int vertex[], int i);
int graph[10][10] = { {0,1,0,1,0,0,0,0,0,0},{1,0,1,0,0,0,0,0,0,0},{0,1,0,1,0,0,0,0,0,0},
{1,0,1,0,0,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,0},{0,0,0,0,1,0,1,0,0,0},
{ 0,0,0,0,0,0,0,1,1,0 },{ 0,0,0,0,0,0,1,0,1,0 },{0,0,0,0,0,0,1,1,0,0},{0,0,0,0,0,0,0,0,0,0} };
// connection of vertex

int zero = 0;

int main()

{
	int t = 1, i = 0, count = 0, node = 0;
	int vertex[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("BEFORE : V'={");
	while (i < 10)
	{
		printf(" %d", vertex[i]);
		i++;
	}
	printf(" }\n");

	while (t)
	{
		i = 0;
		while (i < 10)
		{//choose vertex =1 -> 5 -> 10
			node = rm_edge(vertex,node);//remove vertex
			i++;
		}

		count++; //connectivity

		zero = 0;
		for (int j = 0; j < 10; j++)
		{
			if (vertex[j] == 0)
				zero++;
			if(zero==10) //v'={all 0}-> finish
				t= 0; 

		}
		node = zero;
	}
	int k = 0;
	printf("AFTER : V'={");
	while (k < 10)
	{
		printf(" %d", vertex[k]);
		k++;
	}
	printf(" }\n");
	printf("Connectivity = %d\n", count);
}

int rm_edge(int vertex[],int a)
{
	int i = 0;
	for ( ; i < 10; i++)
	{
		if (graph[a][i] == 1 || (zero==9 && graph[a][i]==0))
		{
			vertex[a] = 0;
			graph[a][i] = 0;
			graph[i][a] = 0;
			break;
		}
	}
	return i;
}