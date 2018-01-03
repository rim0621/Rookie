#include<bits/stdc++.h>
using namespace std;
int table[1003][1003];
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
				table[i][j]=0;
			}
			if(a[i-1]!=b[j-1])
			{
				cache[i][j]=max(cache[i-1][j],cache[i][j-1]);
				if(cache[i-1][j]<cache[i][j-1])
					table[i][j]=1; // up->down
				else
					table[i][j]=2;
			}
		}
	}
	return cache[0][0];	
}
void printLCS(string a,string b,int n,int m)
{
	if(n==0 ||m==0)
		return ;
	if(table[n][m]==0)
	{
		printLCS(a,b,n-1,m-1);
		printf("%c",a[n-1]);
	}
	else if(table[n][m]==1)
		printLCS(a,b,n,m-1);
	else
		printLCS(a,b,n-1,m);
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
	printLCS(a,b,a.size(),b.size());
	printf("\n");
	return 0;	
}
