/****************************************************************
	날짜	: 2018-03-06	
	작성자	: 임중현
	문제	: 1861.정사각형 방
	풀이	: 완전탐색으로 모든 방에서 갈 수 있는 것을 구한다.(재귀)
*****************************************************************/

#include<iostream>
using namespace std;
struct Room{
	int number;
	int count;
};
int c;
Room room[1005][1005];
int nextI[]={0,0,1,-1};
int nextJ[]={1,-1,0,0};
int moveRoom(int i,int j,int n)
{
	if((i<1 && i>n+1) || (j<1 && j>n+1))
	{
		return 0;	
	}
		
	for(int d=0;d<4;d++)
	{
		int a,b;
		a=i+nextI[d];
		b=j+nextJ[d];
		if(room[i][j].number+1==room[a][b].number)
		{
			c++;
			moveRoom(a,b,n);
		}
	}

	return 0;
	
}

int main()
{
	int testCase;
	cin>> testCase;
	for(int t=1;t<=testCase;t++)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>room[i][j].number;
			}
		}

		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				c=0;
				moveRoom(i,j,n);
				room[i][j].count=c+1;
			}
		}
		

		int ans=0;
		int number=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(ans<=room[i][j].count)
				{
					if(ans!=room[i][j].count)
					{
						ans=room[i][j].count;
						number=room[i][j].number;
					}
					else if(ans==room[i][j].count)
					{
						if(number > room[i][j].number)
							number=room[i][j].number;	
					}
				}
			}
		}
		cout<<"#"<<t<<" "<<number<<" "<<ans<<endl;

	}
	return 0;
}
