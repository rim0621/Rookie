#include<bits/stdc++.h>
using namespace std;
int N;
int col[16];
int ans;

void findNqueen(int row);
int isPromising(int row);

int main()
{
	
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		col[0]=i;	//i=row;
		findNqueen(0);	
	}
	
	cout<<ans<<endl;
	return 0;
}

void findNqueen(int row)
{
	if(isPromising(row))	//non-promising이면 밑에꺼 진행안하고 끝
	{
		if(row==N-1){
			ans++;
			return ;
		}
		else
			for(int i=0;i<N;i++)
			{
				col[row+1]=i;
				findNqueen(row+1);
			}
	}
}

int isPromising(int row)
{
	int k=0;
	int promising=1;
	while(k<row && promising)
	{	//같은 열                    // 대각선
		if(col[row]==col[k] || abs(col[row]-col[k])==row-k)
		{
			promising=0;
		}
		k++;
	}
	return promising;
}
