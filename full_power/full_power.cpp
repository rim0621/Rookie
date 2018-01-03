#include<iostream>
using namespace std;

int main()
{
	int n=0,m=0;
	cin>>n;
	cin>>m;
	int x[10000];
	int count=0;
	int sum=0;
	for(int i=0;i<10000;i++)
	{
		if(i*i>=n && i*i<=m)
		{
		  x[count]=i*i;
		  count++;
		}
		else if(i*i<n)
			continue;
		else if(i*i>m)
			break;
	}
	if(count==0)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<count;i++)
	{
		sum+=x[i];
	}
	cout<<sum<<endl;
	cout<<x[0]<<endl;

	return 0;
	
}
