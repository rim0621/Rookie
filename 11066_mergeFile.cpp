#include<bits/stdc++.h>
using namespace std;



int input[505];
int cache[505][505];
int sum(int i,int j)
{
	int total=0;
	for(;i<=j;i++)
		total+=input[i];
	return total;
}
int main()
{
	int numCase;
	scanf("%d",&numCase);
	for(int excute=0;excute<numCase;excute++)
	{
		memset(input,0,sizeof(input));
		memset(cache,100000,sizeof(cache));
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&input[i]);
		}
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				cache[i][j]=10000;	
				if(i==j)
				{
					cache[i][j]=0;
					continue;
				}
				for(int k=i;k<=j-1;k++)
				{
					cache[i][j]=min(cache[i][j],cache[i][k]+cache[k+1][j]+sum(i,j));
				}
			}
		}
		printf("%d\n",cache[1][n]);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<cache[i][j]<< " ";
			}
			cout<<endl;
		}
	}
	return 0;
}
