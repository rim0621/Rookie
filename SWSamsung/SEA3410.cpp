/****************************************************************
	날짜	: 2018-04-09
	작성자	: 임중현
	문제	:  3410. 동서양의 경계
	풀이	:  문제 따라서... 그대로 구현하면됨..
*****************************************************************/
#include<iostream>
#include<stdlib.h>
#include<memory.h>
using namespace std;

#define MAX 99999999

struct Boundury{
	int w,e,total;
};
int n,m;
Boundury b[100000];
void Do(int start, int end, int current,char **arr)
{
	if(current>end)
		return ;
		
	int w=0,e=0;
	for(int i=1;i<=m;i++)
	{
		if(arr[i][current]=='W')
			w++;
		else
			e++;
	}
/*	어느 한 위치에서 동 서를 각각 구하면 시간초과-> 전체를 구하고 이동시 그 위치만구해서 전 데이터에서 추가한다.
	for(int i=1;i<=m;i++)
	{
		for(int j=start;j<=current;j++){
			if(arr[i][j]=='E')
			{
				e++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=current+1;j<=end;j++){
			if(arr[i][j]=='W')
			{
				w++;
			}
		}
	}
*/
	b[current].w=b[current-1].w+e;
	b[current].e=b[current-1].e-w;
	b[current].total=b[current].e+b[current].w;	//최소값을 구하려고.. 경계이다
	Do(start,end,current+1,arr);
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		memset(b,0,sizeof(Boundury)*100000);

		cin>>n>>m;
		char **arr=new char*[m+1];
		for(int i=1;i<=m;i++)
		{
			arr[i]=new char[n+1];
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>arr[i][j];
			}
		}

		int w=0;		
		for(int i=1;i<=m;i++)		//전체를 구하고 다음번에는 옮긴 한줄만 연산하기 위해서 전체를 구한다
		{
			for(int j=1;j<=n;j++){
				if(arr[i][j]=='W')
				{
					w++;
				}
			}
		}
		b[0].e=w;
		b[0].total=w;	
		Do(1,n+1,1,arr);
		
		int number=MAX,ans=0;
		for(int i=0;i<=n;i++)
		{
		  	if(number>b[i].total)
			{

				number=b[i].total;
				ans=i;
   			}	
		}



		cout<<"#"<<test_case<<" "<<ans<<" "<<ans+1<<endl;


		for(int i=1;i<=m;i++){
			delete [] arr [i];
		}
		delete [] arr;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
