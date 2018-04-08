#include<bits/stdc++.h>
using namespace std;

int c[1000002];
int main()
{
	int n;
	scanf("%d",&n);
	c[2]=c[3]=1;
	for(int i=4;i<=n;i++)
	{
		if(i%6==0)
			c[i]=min(c[i-1],min(c[i/2],c[i/3]))+1;
		else if(i%3==0)
			c[i]=min(c[i-1],c[i/3])+1;
		else if(i%2==0)
			c[i]=min(c[i-1],c[i/2])+1;
		else
			c[i]=c[i-1]+1;
	}

	printf("%d\n",c[n]);
	return 0;
}
