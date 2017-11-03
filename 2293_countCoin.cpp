//dp[j]=dq[j-coin[i]];
#include<bits/stdc++.h>
using namespace std;
int dp[10003];
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int *coin=new int[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&coin[i]);
	}
	dp[0]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(j-coin[i]>=0)
				dp[j]+=dp[j-coin[i]];
		}
	}
	printf("%d\n",dp[k]);
	return 0;
}

