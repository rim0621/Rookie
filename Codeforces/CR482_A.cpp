#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
	cin>>n;
	n+=1;
	if(n==1)
		cout<<0<<endl;
	else if(n%2==0)
	{
		cout<<n/2<<endl;
	}
	else
	{
		cout<<n<<endl;
	}
/*
	else
	{
		cout<<(n+1)/2<<endl;
	}*/
	return 0;
}
