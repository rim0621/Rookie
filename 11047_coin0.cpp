

#include<bits/stdc++.h>
using namespace std;
int coin[11];
int main()
{
	int n,total;
	scanf("%d %d",&n,&total);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&coin[i]);
	}

	int c=n-1;
	int count=0;
	while(total!=0)
	{
		if(total-coin[c]>=0)
		{
			total-=coin[c];
			count++;
			if(total==0)
				break;
		}
		else
		{
			c--;
		}
	}
	cout<<count<<endl;

/*	for(int i=1;i<=total;i++)
	{
		int ans=cNumber[i-1]+1;
		for(int k=0;k<n;k++)
		{
			if(i-coin[k]<0)
			{
				break;
			}
			else
			{
				ans=min(ans,cNumber[i-coin[k]]+1);
			}
		}
		cNumber[i]=ans;
	}
	cout<<cNumber[total]<<endl;*/
	return 0;
}
