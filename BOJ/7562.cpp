/****************************************************************
	날짜	: 2018/07/09
	작성자	: 임중현
	문제	: 백준 7562.나이트의 이동  
	풀이	: 방향(8방향)을 설정하고 bfs로 한줄씩 찾아가면서 처음으로 찾는것이 최소로 움직이는 횟수
*****************************************************************/
#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-2,-2,-1,1,2,2,1};
int dy[]={-2,-1,1,2,-2,-1,1,2};

struct Position{
	int x,y;
	Position(int _x, int _y): x(_x), y(_y) {}
};

int gx, gy;
int n,c;
deque<Position> p;
deque<int> deindex;
int vist[306][306];	//방문한 위치는 다시X
void bfs()
{
	int cx=p[0].x;
	int cy=p[0].y;

	if(cx == gx && cy == gy)
	{
		c=deindex[0];
		return ;
	}
	for(int i=0;i<8;i++)
	{
		if(cx+dx[i] >= 0 && cx+dx[i] <= n-1 && cy+dy[i] >= 0 && cy+dy[i] <= n-1 && vist[cx+dx[i]][cy+dy[i]] == 0)
		{
			deindex.push_back(deindex[0]+1);// 뎁스를 구별하기 위해서
			p.push_back(Position(cx+dx[i],cy+dy[i]));
			vist[cx+dx[i]][cy+dy[i]]=1; //밖에 놨을때는 중복되서 코어덤프발생!
		}
	}

	p.pop_front();
	deindex.pop_front();


	bfs();
}
int main()
{
	int testCase;
	cin>> testCase;
	for(int i=0;i<testCase;i++)
	{
	

		p.clear();
		deindex.clear();
		c=0;
		int x,y;
		cin>>n;
		cin>>x>>y;
		cin>>gx>>gy;
		memset(vist,0,sizeof(vist));
		p.push_back(Position(x,y));
		deindex.push_back(0);
		bfs();
		cout<<c<<endl;
	}
	
	return 0;
}
