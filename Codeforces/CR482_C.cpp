
#include<bits/stdc++.h>
using namespace std;
vector<int> v[300004];
int tmp[300004];
int nov=0;

int dfs(int node)
{
	tmp[node]=1;
	nov++;
	for(int i=0;i<v[node].size();i++)
	{
		if(tmp[v[node][i]]==0)
			dfs(v[node][i]);
	}
	return 0;
}

int main()
{
	int n,x,y;
	cin>> n >> x >> y;
	int a,b;
	for(int i=1;i<n;i++)
	{
		cin>> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	long long yw=1,xw=1;
	tmp[x]=1;
	for(int i=0;i<v[x].size();i++)
	{
		dfs(v[x][i]);
		if(tmp[y]==1)
			tmp[y]=0;
		else
			xw+=nov;
		nov=0;
	}
	memset(tmp,0,sizeof(tmp));
	tmp[y]=1;
	nov=0;
	for(int i=0;i<v[y].size();i++)
	{
		dfs(v[y][i]);
		if(tmp[x]==1)
			tmp[x]=0;
		else
			yw+=nov;
		nov=0;
	}
	long long	number=n;
	long long ans;
	ans= number*(number-1)-(xw*yw);
	cout<<ans<<endl;
	return 0;
}
