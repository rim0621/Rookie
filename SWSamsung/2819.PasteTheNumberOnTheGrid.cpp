/******************************************************* 
*  author  : jeremy										*
*  problem : 2819. 격자판의 숫자 이어 붙이기			*
*  data    : 19/10/18									*
********************************************************/

#include<bits/stdc++.h>

#define MAX_LEN		4

using namespace std;


int board[MAX_LEN][MAX_LEN];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
vector<int> b;

void paste_number(int x,int y,int val,int count)
{
	if(count == 0)
	{
		b.push_back(val);
		return ;
	}
	if(x<0 && x>=MAX_LEN && y<0 && y>=MAX_LEN)
	{
		return ;
	}

	switch(count){
		case 7:
			val += board[x][y] * 1000000;
			break;
		case 6:
			val += board[x][y] * 100000;
			break;
		case 5:
			val += board[x][y] * 10000;
			break;
		case 4:
			val += board[x][y] * 1000;
			break;
		case 3:
			val += board[x][y] * 100;
			break;
		case 2:
			val += board[x][y] * 10;
			break;
		case 1:
			val += board[x][y] * 1;
			break;
		default :
			cout<<"error"<<endl;
			break;
	}

	count -=1;

	for(int i=0;i<MAX_LEN;i++)
	{
		paste_number(x+dx[i],y+dy[i],val,count);
	}

}

int main()
{
	int tc_num;
	cin >> tc_num;

	for(int tc=1;tc<=tc_num;tc++)
	{
		//init

		b.clear();

		for(int i=0;i<MAX_LEN;i++)
		{
			for(int j=0;j<MAX_LEN;j++)
			{
				cin >> board[i][j];
			}
		}

		for(int i=0;i<MAX_LEN;i++)
		{
			for(int j=0;j<MAX_LEN;j++)
			{
				paste_number(i,j,0,7);
			}
		}


		sort(b.begin(), b.end());
		b.erase(unique(b.begin(), b.end()),b.end());

		cout << "#"<<tc<<" "<<b.size()<<endl;
	}
	

	return 0;
}
