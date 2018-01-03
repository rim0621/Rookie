#include<bits/stdc++.h>
using namespace std;
int sum[505];
int cache[505][505];
int main()
{
	int numCase;
	scanf("%d",&numCase);
	for(int excute=0;excute<numCase;excute++)
	{
		memset(cache,0,sizeof(cache));
		memset(sum,0,sizeof(sum));
		int n;
		scanf("%d",&n);

		for(int i=1;i<=n;i++)
		{
			scanf("%d",&sum[i]);
			sum[i]+=sum[i-1];
		}
		int j;
		for(int diagonal=1;diagonal<=n-1;diagonal++)
		{
		 	for(int i=1;i<=n-diagonal;i++)
		 	{
				j=i+diagonal;
				cache[i][j]=999999999;
				if(i==j)
				{
					cache[i][j]=0;
					continue;
				}
				for(int k=i;k<=j-1;k++)
				{
					cache[i][j]=min(cache[i][j],cache[i][k]+cache[k+1][j]-sum[i-1]+sum[j]);
				}
				
			}
		}


		printf("%d\n",cache[1][n]);
/*		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<cache[i][j]<< " ";
			}
			cout<<endl;
		}*/
	}
	return 0;
}
