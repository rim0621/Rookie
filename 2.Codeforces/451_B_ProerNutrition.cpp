#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,x;
	int y;
	cin>> n;
	cin>> a;
	cin>> b;
	for(x=0;a*x<=n;x++)
	{
		y=(n-a*x)%b;
		if(y==0)
		{
			y=(n-a*x)/b;
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<endl;	
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
	
}
