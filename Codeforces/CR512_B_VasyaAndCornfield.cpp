#include<bits/stdc++.h>
using namespace std;


int main()
{
	int d,n;
	int m;
	int x,y;
	cin>> n >> d;
	cin>> m ;
	for(int i=0;i<m;i++)
	{
		cin>> x>> y;
		if( x-y <= d && y-x<=d && x+y >=d && x+y <= 2*n-d)	//양끝 표현..(+)는 최대,내부 최소..가 될수있는점.. (-)는 내부범위
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;

}
