#include<bits/stdc++.h>
using namespace std;
int timeConsume[1001];
long long total[1001];
int main()
{
	int numPeople;
	scanf("%d",&numPeople);
	for(int i=1;i<=numPeople;i++)
	{
		scanf("%d",&timeConsume[i]);
	}
	sort(timeConsume+1,timeConsume+numPeople+1);
	
	long long sum=0;
	for(int i=1;i<=numPeople;i++)
	{
		total[i]=total[i-1]+timeConsume[i];
	}
	for(int i=1;i<=numPeople;i++)
	{
		sum+=total[i];
	}
		
	cout<<sum<<endl;
	return 0;
}
