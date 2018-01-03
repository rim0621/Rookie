#include<bits/stdc++.h>
using namespace std;

int cache[1002][3];
struct Option{
	int R,G,B;
};

void  paintHouse(Option* color,int n)
{

	for(int i=1;i<=n;i++)
	{
		cache[i][0]=min(cache[i-1][1]+color[i].R,cache[i-1][2]+color[i].R);
		cache[i][1]=min(cache[i-1][0]+color[i].G,cache[i-1][2]+color[i].G);
                cache[i][2]=min(cache[i-1][0]+color[i].B,cache[i-1][1]+color[i].B);
	}
}


int main()
{
	int n;
	Option color[1002];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&color[i].R,&color[i].G,&color[i].B);
	}
	paintHouse(color,n);
	printf("%d\n",min(cache[n][0],min(cache[n][1],cache[n][2])));


	return 0;	
}
