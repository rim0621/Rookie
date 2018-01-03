#include<bits/stdc++.h>
using namespace std;
int price[1004];
int d[1004];
int main()
{	
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&price[i]);
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			d[i]=max(d[i],d[i-j]+price[j]);
			// ex)  3   ,   2 + 1 or 1+2 or 0+3
		}
	}
	sort(d+1,d+1+n,greater<int>());
	cout<<d[1]<<endl;
	return 0;
}

