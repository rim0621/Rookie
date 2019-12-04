/********************************************************
 * author  : jeremy
 * problem : 7733.cheese thief from SW Expert Academy  
 * data    : 19/07/21
 *******************************************************/


#include<bits/stdc++.h>

#define MAX_DAY 100

using namespace std;
int cheese[103][103];
int bitmap[103][103];
int dx[4]={0,-1,1,0};
int dy[4]={1,0,0,-1};
int days[101];
int n;
int get_day(int day)
{
	for(int i=day;i<=MAX_DAY;i++)
	{
		if(days[i]==1)
		{
			days[i]=0;
			return i;
		}
	}
	return -1;
}
int find_chunk(int x, int y, char str1, char str2,int day)
{
	if(bitmap[x][y]=='x')
	{
		return 0;
	}
	if(x > n || x < 1 || y > n || y < 1 || bitmap[x][y] == str2)
	{
		return 0;
	}
	bitmap[x][y]=str2;
	for(int i=0;i<4;i++)
	{
		find_chunk(x+dx[i],y+dy[i],str1,str2,day);
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
		int *p_x=&x;
		int *p_y=&y;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >> cheese[i][j];
				days[cheese[i][j]]=1;
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
			memcpy(bitmap,cheese,sizeof(int)*101*101);
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
			 
			if(day==-1)
			{
				break;
			}
			
			for(int x=1;x<=n;x++){
				for(int y=1;y<=n;y++){
					if(test_case%2==1){
						count+=find_chunk(x,y,'O','T',day);
					}else{
						count+=find_chunk(x,y,'T','O',day);	
					}
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
