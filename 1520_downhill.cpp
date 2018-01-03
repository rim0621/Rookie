//현재 위치에서 4방향에서 올수 있는 값들을 더함

#include<bits/stdc++.h>
using namespace std;

int travelMap[502][502];
int methodWay[502][502];
int dx[]={0,-1,1,0};
int dy[]={-1,0,0,1};
int countCase(int y,int x,int n,int m)
{
	int& ret=methodWay[y][x];
	if(x==m && y==n) return 1;
	if(ret!=-1) return ret;
	ret=0;
        for(int k=0;k<4;k++){
            	 if(travelMap[y+dy[k]][x+dx[k]]<travelMap[y][x] && y+dy[k]>0 && x+dx[k]>0 && y+dy[k]<=n && x+dx[k]<=m)
		{
			ret+=countCase(y+dy[k],x+dx[k],n,m);
		}
	}
	return ret;
}

int main()
{
	int n,m;
	memset(methodWay,-1,sizeof(methodWay));
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&travelMap[i][j]);
		}
	}
	countCase(1,1,n,m);
	printf("%d\n",methodWay[1][1]);

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<methodWay[i][j]<<" ";
		}
		cout<<endl;
	}	
}
