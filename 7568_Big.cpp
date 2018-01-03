//자신보다 크다면 k+1이다!!!!
#include<bits/stdc++.h>
using namespace std;
struct Person{
	int tall, weight,rank;
};
Person p[51];
int main()
{
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		scanf("%d %d", &p[i].tall, &p[i].weight);
	}
	int k;
	for(int i=1;i<=num;i++)
	{
		k=1;
		for(int j=1;j<=num;j++)
		{
			if(p[i].tall<p[j].tall && p[i].weight<p[j].weight)
			{
				k++;
			}
		}
		p[i].rank=k;
	}

	for(int i=1;i<=num;i++)
	{
		printf("%d ",p[i].rank);
	}

	printf("\n");
	return 0;
}
