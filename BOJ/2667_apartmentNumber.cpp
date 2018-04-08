//문제에 오름차순으로 정렬하라고 하잖아!!!!!!!!!

#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int apt[26][26];
int N;
struct Position{
	int y,x;
	Position(int y,int x)
	{
		this->y=y;
		this->x=x;
	}
};
int isSame(deque<Position> deq,int c)
{
	int count=0;
	while(!deq.empty())
	{
		for(int i=0;i<4;i++)
		{
			if(deq[0].x+dx[i]>=0 && deq[0].y+dy[i]>=0 && deq[0].x+dx[i]<N && deq[0].y+dy[i]<N && apt[deq[0].y+dy[i]][deq[0].x+dx[i]] == 1)
			{
				deq.push_back(Position(deq[0].y+dy[i],deq[0].x+dx[i]));
		                apt[deq[0].y+dy[i]][deq[0].x+dx[i]]=c;

			}
		}
		deq.pop_front();
		count++;
	}
	
	return count;
}


void findCluster()
{
	vector<int> number;
	deque<Position> deq;
	int c=1;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(apt[i][j]==1)
			{
				c++;
				deq.push_back(Position(i,j));
				apt[deq[0].y][deq[0].x]=c;
				number.push_back(isSame(deq,c));
				deq.pop_front();
					
			}
		}
	}
	cout<<c-1<<endl;
	sort(number.begin(),number.end(),less<int>());
	for(int i=0;i<number.size();i++)
		cout<<number[i]<<endl;
}


int main()
{
	cin>>N;
	for(int i=0;i<N;i++)
	{
		string tmp;
		cin>>tmp;
		for(int j=0;j<N;j++)
		{
			if(tmp[j]=='1')
				apt[i][j]=1;
			else
				apt[i][j]=0;
		}
	}


	findCluster();
	
	return 0;
}
