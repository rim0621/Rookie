#include<bits/stdc++.h>
using namespace std;

int main()
{
	int hamburger[3];
	int soda[2];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&hamburger[i]);
	}
	for(int i=0;i<2;i++)
	{
		scanf("%d",&soda[i]);
	}
	sort(hamburger,hamburger+3);
	sort(soda,soda+2);
	int ans=hamburger[0]+soda[0]-50;
	printf("%d\n",ans);
	return 0;
}
