#include<bits/stdc++.h>
using namespace std;
long long a[100003];
long long b[100003];

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	sort(b,b+n,greater<int>());
	int cap=b[0]+b[1];
	for(int i=0;i<n;i++)
	{
		if(cap-a[i]<0){
			cout<<"NO"<<endl;
			return 0;
		}
		else{
			cap-=a[i];	
		}
	}
	cout<<"YES"<<endl;
	return 0;
}

	
