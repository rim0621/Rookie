#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[8]={1,6,28,120,496,2016,8128,32640};
	cin>>n;
	for(int i=7;i>=0;i--)
	{
		if(n%a[i]==0)
		{
			cout<<a[i]<<endl;
			break;
		}
	}
	return 0;
}
