#include<bits/stdc++.h>
using namespace std;


int cost[100004];
int connect[100004];

int Next(int x){return connect[x]==x?x:connect[x]=Next(connect[x]);}	//	연결된거 계속 들어감.
// if문 써서 하는 것보다 훨씬 빠름


int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&cost[i]);
		connect[i]=i;
	}
	int a,b;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		connect[Next(a)]=Next(b);	//연결시킴!!!	
	}
	for(int i=1;i<=n;i++)
	{
		cost[Next(i)]=min(cost[Next(i)],cost[i]);
	}
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		if(i==Next(i)){
			ans+=cost[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
