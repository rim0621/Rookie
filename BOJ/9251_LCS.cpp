#include<bits/stdc++.h>
using namespace std;

int cache[1003][1003];
int LCS(string &a, string &b)
{
	for(int i=1;i<=a.size();i++)
	{
		for(int j=1;j<=b.size();j++)
		{
			if(a[i-1]==b[j-1])
			{
				cache[i][j]=cache[i-1][j-1]+1;
			}
			if(a[i-1]!=b[j-1])
			{
				cache[i][j]=max(cache[i-1][j],cache[i][j-1]);
			}
		}
	}
	return cache[0][0];	
}

int main()
{
	string a,b;
	cin>>a>>b;
	if(b.size()>a.size())
	{
		swap(a,b);
	}
	LCS(a,b);
/*	for(int i=0;i<=a.size();i++){
		for(int j=0;j<=b.size();j++)
			cout<<cache[i][j]<<" ";
		cout<<endl;
	}*/
	printf("%d\n",cache[a.size()][b.size()]);
	return 0;	
}
