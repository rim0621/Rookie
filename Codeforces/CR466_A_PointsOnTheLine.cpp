#include<bits/stdc++.h>
using namespace std;
int input[101];
int main()
{
	int n,d,s=1000,same=1;;
	cin>> n >> d;
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		if(s==input[i])
		{
			same++;
		}
		s=input[i];
	}
	if(n==1||same==n)
	{
		cout<<0<<endl;
		return 0;
	}
	sort(input,input+n);
	int minN=101,maxN=101,maxC=0,c=0;
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=i+1;j<n;j++)
		{
			if(abs(input[i]-input[j])<=d)
				c++;
		}
		if(maxC<c)
		{
			maxC=c;
		}
	}
	int ans = n-maxC-1;
	cout<<ans<<endl;
	return 0;
}
