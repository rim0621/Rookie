/****************************************************************
*	author	:	jeremy											*
*	problem :	1907. SandCastle								*
*	data	:	20/01/08										*
*****************************************************************/



#include<bits/stdc++.h>
using namespace std;

struct Position{
	int x;
	int y;
	int val;

};

int dx[]={-1, -1,  0,  1, 1, 1, -1, 0};
int dy[]={-1,  0, -1, -1, 1, 0,  1, 1};

int sand_map[1000][1000];
queue<Position> q;

int max_x;
int max_y;

void find_weak(int x,int y)
{
	Position p;
	int next_x, next_y;
	int current_val=sand_map[x][y];
	if (current_val==9)
	{
		return ;
	}

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			next_x=x+dx[i];
			next_y=y+dy[j];

			if(next_x<0 || next_y<0 || next_x>=max_x || next_y>=max_y) // overrange
				continue;
			else{
				if(sand_map[next_x][next_y]=='.')
					current_val-=1;
			}
			if (current_val==0)
			{
				p.x=x;
				p.y=y;
				p.val=sand_map[x][y];
				q.push(p);
				return ;
			}

		}
	}

	return ;
}

int main()
{
	int tc;
	cin>>tc;
	for(int num=1;num<=tc;num++)
	{
		//input
		int result=0;
		cin >> max_x
		cin >> max_y;
		for(int x=0;x<max_x;x++)
		{
			for(int y=0;y<max_y;y++)
			{
				cin >> sand_map[x][y];
			}
		}
		//search able delete
		for(int x=0;x<max_x;x++)
		{
			for(int y=0;y<max_y;y++)
			{
				find_weak(x,y);
			}
		}

		//queue check
		if(q.empty())
			cout<<result<<endl;
		else
		{
			//큐에서 뽑고 .처리후 다시 8방향 
		}
			
	
	}
}
