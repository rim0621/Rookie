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

void find_weak(int x,int y,int cnt)
{
	Position p;
	int next_x, next_y;
	int current_val=sand_map[x][y];
	if (current_val == 9 || current_val == -2)
	{
		return ;
	}

	for(int i=0;i<8;i++)
	{
		next_x=x+dx[i];
		next_y=y+dy[i];

		if(next_x<0 || next_y<0 || next_x>=max_x || next_y>=max_y) // overrange
			continue;
		else{
			if(sand_map[next_x][next_y]==-2)
				current_val-=1;
		}
		if (current_val==0)
		{
			p.x=x;
			p.y=y;
			p.val=cnt+1;
			q.push(p);
			return ;
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
		cin >> max_x;
		cin >> max_y;
		Position c_p={0,0,0};

		for(int x=0;x<max_x;x++)
		{
			string s;
			cin >> s;
			for(int y=0;y<max_y;y++)
			{
				sand_map[x][y]=s[y]-'1'+1;
			}
		}

		//search able delete
		for(int x=0;x<max_x;x++)
		{
			for(int y=0;y<max_y;y++)
			{
				find_weak(x,y,0);
			}
		}
		
		//queue check
		while(!q.empty()){
			
			c_p=q.front();
			q.pop();
			int x=c_p.x;
			int y=c_p.y;
			int cnt=c_p.val;
			sand_map[x][y]=-2;

			//debug
/*			cout<<"cnt:"<<cnt<<"/Qsize:"<<q.size()<<"============================="<<endl;
			cout<<x<<"/"<<y<<endl;
			for(int x_v=0;x_v<max_x;x_v++)
			{
				for(int y_v=0;y_v<max_y;y_v++)
				{
					printf("%d\t",sand_map[x_v][y_v]);
				}
				printf("\n");
			}
*/
			for(int i=0;i<8;i++){
				int next_x=x+dx[i];
				int next_y=y+dy[i];
				if(next_x<0 || next_y<0 || next_x>=max_x || next_y>=max_y) // overrange
					continue;
				else
					find_weak(next_x,next_y,cnt);
			}

			result=cnt;
		}

		cout<<"#"<<num<<" "<<result<<endl;
		//for next tc
		memset(sand_map,0,sizeof(int)*1000*1000);
	}
	return 0;
}