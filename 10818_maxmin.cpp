#include<bits/stdc++.h>
using namespace std;
int table[1000004];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&table[i]);
	}
	sort(table+1,table+1+n);
	printf("%d %d\n",table[1],table[n]);
	return 0;
}
