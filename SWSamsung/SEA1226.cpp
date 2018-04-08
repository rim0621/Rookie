/****************************************************************
	날짜	: 2018-03-05
	작성자	: 임중현
	문제	: 1226.[S/W 문제해결 기본] 7일차 - 미로1
	풀이	: 재귀로 갈 수 있는 모든곳을 탐색한다.(완전탐색)
*****************************************************************/

#include<iostream>
#define SIZE 16
using namespace std;

char maze[SIZE][SIZE];

int d_x[]={0,0,1,-1};
int d_y[]={1,-1,0,0};
int startX,startY,endX,endY;

int findWay(int y,int x)
{
	int flag=0;
	if(0<=x && x<16 && 0<=y && y<16){
		if(maze[y][x]=='1')
		{
			return 0;
		}
		if(maze[y][x]=='3')
		{
			return 1;
		}
		if(maze[y][x]=='0'||maze[y][x]=='2'){
			maze[y][x]='1';
			for(int i=0;i<4;i++)
			{
				flag+=findWay(y+d_y[i],x+d_x[i]);
			}
		}
	}
	
	return flag;
	
}

int main()
{
	for(int t=0;t<10;t++)
	{
		int num;
		cin>>num;
		int flag=0;
		for(int i=0;i<SIZE;i++)
		{
			cin>>maze[i];
		}

		for(int y=0;y<SIZE;y++)
		{
			for(int x=0;x<SIZE;x++)
			{
				if(maze[y][x]=='2')
				{
					startX=x;
					startY=y;
				}
			}
		}
		flag=findWay(startY,startX);
		if(flag==0)
		{
			cout<<"#"<<num<<" "<<flag<<endl;
		}
		else
		{
			
			cout<<"#"<<num<<" "<<1<<endl;
		}



		
	}	
	return 0;
}

