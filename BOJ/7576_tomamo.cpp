#include<bits/stdc++.h>
using namespace std;

struct Tomato{
	int r,c,state;
};


Tomato tomato[1004][1004];

int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	deque<Tomato> t;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&tomato[i][j].state);
			tomato[i][j].r=i;
			tomato[i][j].c=j;
			if(tomato[i][j].state==1)		//익은것 큐에 옴기기
				t.push_back(tomato[i][j]);
		}

	}
	if(t.size()==n*n)
	{
		cout<<"0"<<endl;
		return 0;
	}
	int day=0;
	deque<Tomato> t1;
	while(!t.empty())	//큐가 비어있으면 더이상 익을 수 없음.
	{
//		for(deque<int>::size_type i=0;i<t.size();++i) // Q 확인
//			cout<<t[i].r <<" "<<t[i].c<<"...";
//		cout<<endl;
		t1=t;
		t.clear();
		// 반복문 한번이 하루
		for(deque<int>::size_type i=0; i<t1.size();i++)
		{
				//위아래왼오른 확인하고 0이면 익힘. 비거나(-1)익혀(1)있으면 무시
				//익으면 다시 큐로 저장
			if(t1[i].r-1>=1 && tomato[t1[i].r-1][t1[i].c].state==0)
			{
				tomato[t1[i].r-1][t1[i].c].state=1;
				t.push_back(tomato[t1[i].r-1][t1[i].c]);
			}

			if(t1[i].r+1<=n&&tomato[t1[i].r+1][t1[i].c].state==0)
			{
				tomato[t1[i].r+1][t1[i].c].state=1;
				t.push_back(tomato[t1[i].r+1][t1[i].c]);
			}
			if(t1[i].c-1>=1&&tomato[t1[i].r][t1[i].c-1].state==0)
			{
				tomato[t1[i].r][t1[i].c-1].state=1;
				t.push_back(tomato[t1[i].r][t1[i].c-1]);
			}
			if(t1[i].c+1<=m&&tomato[t1[i].r][t1[i].c+1].state==0)
			{
				tomato[t1[i].r][t1[i].c+1].state=1;
				t.push_back(tomato[t1[i].r][t1[i].c+1]);
			}
		}
		day++;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(tomato[i][j].state==0)
			{
				cout<<"-1"<<endl;
				return 0;
			}
		}
	}

	cout<<day-1<<endl;
	return 0;
}
