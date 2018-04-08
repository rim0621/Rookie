//4등분을 해서 맨 밑으로 가면 기본 2*2짜리에서 위로 큰게 올라오면서  사분면중 하나의 거리(?)만큼 더해준다.

#include<bits/stdc++.h>
using namespace std;


int quadrant(int n,int row,int col)
{
	int limit1=pow(2,n)/2;
	int limit2=pow(2,n);
	if(row<=limit1-1 && col<=limit1-1) //1사분면
	{
		return 1;	
	}
	else if(row<=limit1-1 && col<=limit2-1)	//2
	{
		return 2;
	}
	else if(row<=limit2-1 && col<=limit1-1)	//3
	{
		return 3;
	}
	else if(row<=limit2-1 && col<=limit2-1)	//4
	{
		return 4;
	}
}

int maze(int n,int row,int col)
{
	int number;
	if(row==0 && col==0)
	{
		return 0;
	}
	else if(row==0 && col==1)
	{
		return 1;
	}
	else if(row==1 && col==0)
	{
		return 2;
	}
	else if(row==1 && col==1)
	{
		return 3;
	}
	int tmp;
	int q=quadrant(n,row,col);
	if(q==1)
	{
		tmp=maze(n-1,row,col);
		number=tmp;
		return number;
	}
	else if(q==2)
	{
		tmp=maze(n-1,row,col-pow(2,n)/2);
		number=tmp+pow(2,n)*pow(2,n)/4;
		return number;
	}
	else if(q==3)
	{	
		tmp=maze(n-1,row-pow(2,n)/2,col);
		number=tmp+pow(2,n)*pow(2,n)*2/4;
		return number;
	}
	else if(q==4)
	{
		tmp=maze(n-1,row-pow(2,n)/2,col-pow(2,n)/2);
		number=tmp+pow(2,n)*pow(2,n)*3/4;
		return number;
	}
	

}

int main()
{
	int n,r,c;
	scanf("%d",&n);
	scanf("%d %d", &r,&c);

	cout<<maze(n,r,c)<<endl;
	return 0;
}














