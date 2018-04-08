#include<iostream>
using namespace std;

int findCount(int n)
{
	int count=1;
	while(1)
	{

		if(n/10!=0)
		{
			count++;
			n/=10;
		}
		else
		{
			break;
		}
	}
	return count;
}
int Sum(int x)
{
	int result=0;
	int end=findCount(x);
	for(int i=0;i<end;i++)
	{
		 result+=x%10;
		 x=x/10;
	}
	return result;
}



int main()
{

	int x,n,dx;
	cout<<"input:";
	cin>>n;
	x=n;
	dx=findCount(x)*9;
	x-=dx;
	int (*pf)(int);
	pf=Sum;
	for(int i=0;i<dx;i++)
	{
		x=x+1;
		if(x+pf(x)==n)
		{
			cout<<x<<endl;
			break;
		}
		else if(i==dx-1)
		{
			cout<<0<<endl;
		}
		cout<<x+pf(x)<<endl;
	}

	return 0;
}
