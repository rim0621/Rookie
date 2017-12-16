#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,x;
	float y;
	cin>> n;
	cin>> a;
	cin>> b;
	for(x=0;x<=10000000;x++)
	{
		y=(n-a*x)/b;
		if(y<0)
		{
			continue;
		}
		if(a*x+b*y==n)
		{
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<endl;	
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
	
}
