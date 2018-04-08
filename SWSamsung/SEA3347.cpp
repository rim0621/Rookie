/****************************************************************
	날짜	: 2018-03-06
	작성자	: 임중현
	문제	: 3347. 올림픽종목투표 
	풀이	: 문제를 잘읽으면 ... 가장재미있는경기에 표를준다.
			가장재미있는 경기는 맨위에꺼이다.
*****************************************************************/

#include<iostream>
using namespace std;
int a[1003][2];
int b[1003];
int main()
{
	int testCase;
	cin>>testCase;
	for(int t=1;t<=testCase;t++)
	{
		int n,m;
		cin>> n >> m;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i][0];
			a[i][1]=0;
		}
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
		}

		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(b[i]>=a[j][0])
				{
					a[j][1]+=1;
					break;
				}
			}
		}

		int ans=0,ansP=0;

		for(int i=1;i<=n;i++)
		{
			if(ans<a[i][1])
			{
				ansP=i;
				ans=a[i][1];
			}
		}

		cout<<"#"<<t<<" "<<ansP<<endl;
	}
	return 0;

}
