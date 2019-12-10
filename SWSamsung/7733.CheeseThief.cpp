/********************************************************
 * author  : jeremy
 * problem : 7733.cheese thief from SW Expert Academy  
 * data    : 19/07/21
 *******************************************************/


#include<bits/stdc++.h>

#define SIZE 102
using namespace std;
int cheese[SIZE][SIZE];
int bitmap[SIZE][SIZE];
int dx[4]={0,-1,1,0};
int dy[4]={1,0,0,-1};
int days[102];
int n;
int max_day;
int get_day(int day)
{
	for(int i=1;i<=max_day;i++)
	{
		if(days[i]==1)
		{
			days[i]=0;
			return i;
		}
	}
	return -1;
}
int find_chunk(int x, int y,char str)
{
	if(bitmap[x][y]=='x')
	{
		return 0;
	}
	if(x >= n+1 || x <= 0 || y >= n+1 || y <= 0 || bitmap[x][y] == str)
	{
		return 0;
	}
	bitmap[x][y]=str;
	for(int i=0;i<4;i++)
	{
		find_chunk(x+dx[i],y+dy[i],str);
	}

	return 1;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		int max_cnt=1;
		int day=0;
		int count=0;
		int x=0;
		int y=0;
		max_day=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >> cheese[i][j];
				days[cheese[i][j]]=1;
				max_day=max(max_day,cheese[i][j]);
			}
		}
		while(1){
			day=get_day(day);
			for(int x=1;x<=n;x++)
			{
				for(int y=1;y<=n;y++)
				{
					if(cheese[x][y]==day)
					{
						cheese[x][y]='x';
					}
				}
			}
			memcpy(bitmap,cheese,sizeof(int)*SIZE*SIZE);
			count=0;
			cout<<"day : "<<day<<endl;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cout << bitmap[i][j] <<"\t";
				}
				cout<<endl;
			}

			if(day==max_day)
			{
				break;
			}

			for(int x=1;x<=n;x++){
				for(int y=1;y<=n;y++){
					count+=find_chunk(x,y,'O');
				}
			}
			cout<<"cnt : "<<count<<endl;
			cout<<"-------------------------------------------------"<<endl;

			max_cnt=max(max_cnt,count);

		}
		cout<<"#"<<test_case<<" "<<max_cnt<<endl;




	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
