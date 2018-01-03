#include<bits/stdc++.h>
using namespace std;
int cache[45];

int fibo0(int n)
{
	int sum=0;
	if(cache[n]!=0)
		return cache[n];
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 0;
	}
	else
	{
	 	return cache[n]+=fibo0(n-1)+fibo0(n-2); 
	}
}
int fibo1(int n)
{
        if(cache[n]!=0)		//메모라이제이션
                return cache[n];
        if(n==0)
        {
                return 0;
        }
        else if(n==1)
        {
                return 1;
        }
        else
        {
                return cache[n]+=fibo1(n-1)+fibo1(n-2);
        }

}

int main()
{
	int numCase;
	scanf("%d",&numCase);
	for(int i=0;i<numCase;i++)
	{
		int input;
		scanf("%d",&input);
		memset(cache,0,sizeof(cache));
		cout<<fibo0(input)<<" ";
		memset(cache,0,sizeof(cache));
		cout<<fibo1(input)<<" ";
		cout<<endl;
	}
	return 0;
}
