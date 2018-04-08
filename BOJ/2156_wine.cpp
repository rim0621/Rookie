/*
working backward :  case of 3 

1. eat currnet thing // wine[i] + dp[i-2]  연속3개가 안되므로 -1 이아니라 -2
2. no eat current 	// dp[i-1]  현재 꺼 먹고 전전에서 두개
3  eat currnet + before 	//	wine[i]+wine[i-1]+dp[i-3] 현재랑 이전 꺼먹고 전전전에서 2개.  
*/


#include<bits/stdc++.h>
using namespace std;

int wine[100004];
int dp[100004];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&wine[i]);
	}
	for(int i=1;i<=n;i++)
	{
		dp[i]=wine[i]+wine[i-1];
	}

	for(int i=3;i<=n;i++)
	{	//     현재 안먹을때 , 현재먹고 전전두개,    현재랑 전꺼먹고 전전전
		dp[i]=max(dp[i-1],max(wine[i]+dp[i-2],wine[i]+wine[i-1]+dp[i-3]));
	}
	printf("%d",dp[n]);
	return 0;
}
