#include<bits/stdc++.h>
#define MAX_B 502
using namespace std;

struct Building{
	int buildTime;			//걸리는 시간
	int totalTime;
	int count;	
	vector<int> conn;
};

Building b[MAX_B];
int main()
{
	int N,info;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&b[i].buildTime);
		while(1)
		{
			scanf("%d",&info);
			if(info==-1)
				break;

			b[info].conn.push_back(i);
			b[i].count++;	
		}
	}

	vector<int> preBuliding;
	for(int i=1;i<=N;i++)
	{
		if(b[i].count==0){
			preBuliding.push_back(i);
			b[i].totalTime=b[i].buildTime;
		}
	}

	int number,connect;
	while(!preBuliding.empty())
	{
		number=preBuliding.back();
		preBuliding.pop_back();
		for(int i=0;i<b[number].conn.size();i++)
		{
				
			connect=b[number].conn[i];
			b[connect].totalTime=max(b[connect].totalTime,b[number].totalTime+b[connect].buildTime);
			b[connect].count--;
			if(b[connect].count==0)
				preBuliding.push_back(connect);
		}
		
	}
	
	for(int i=1;i<=N;i++)
	{
//		cout<<b[i].buildTime<<"   "<<b[i].totalTime<<endl;
		printf("%d\n",b[i].totalTime);
	}
	return 0;
}
