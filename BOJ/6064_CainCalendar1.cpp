#include<bits/stdc++.h>
using namespace std;


int main()
{
	int numCase;
	scanf("%d",&numCase);
	for(int num=0;num<numCase;num++)
	{
		int M,N,x,y;
		int x1=1,y1=1,year=0;
		scanf("%d %d %d %d",&M, &N, &x, &y);
		
		while(1)
		{
			year++;
			if(x1<M)
				x1=x1+1;
			else
				x1=1;
			
			if(y1<N)
				y1=y1+1;
			else
				y1=1;


			cout<<x1<<":"<<y1<<endl;
			if(x1==x && y1==y)
			{
				break;
			}
			if(year==M*N)
			{
				year=-2;
				break;
			}
		}
		cout<<year+1<<endl;		
	}
	return 0;
}

