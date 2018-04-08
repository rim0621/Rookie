#include<bits/stdc++.h>
using namespace std;
int input[100004];
int main()
{
	int n;
	cin>>n;
	long long min_n=1000000003;
	int distance=100000000;
	int ans=10000000;
	for(int i=1;i<=n;i++)
	{
		cin>>input[i];
		if(min_n>input[i])
		{
			min_n=input[i];
			distance=i;
			ans=100000000;
		}
		else if(min_n==input[i])
		{
			ans=min(i-distance,ans);
			distance=i;
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
