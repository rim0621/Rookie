#include<bits/stdc++.h>
using namespace std;
int test(int M,int N,int x,int y)
{
	int nextd,downd;
	int next=1,down=1,init=1;
	int count=0;
	int i=0;
	nextd=abs(x-y);
	downd=abs(M-N);
	
	while(1)
	{
		if(abs(next-down)!=nextd)
		{	
			count+=M;
			if(down<=N)
				down+=downd;
			else
				down=init+1;
			if(init==N)
			{
				init=1;
				next+=1;
			}
		}
		else
		{
			
			while(i<M){
	                        cout<<next<<":"<<down<<endl;

				if(next==x && down==y)
				{
					return count;
				}

	   			if(next<M)
					next+=1;
				else
					next=1;
			
				if(down<N)
					down+=1;
				else
					down=1;
				count++;
				i++;
			}
			return -1;
		}
	}

}

int main()
{
	int numCase;
	scanf("%d",&numCase);
	for(int num=0;num<numCase;num++)
	{
		int M,N,x,y;
		int x1=1,y1=1,year=0;
		scanf("%d %d %d %d",&M, &N, &x, &y);
		cout<<test(M,N,x,y)<<endl;
	}
	return 0;
}
