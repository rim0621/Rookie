#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{ 
    int mod = a % b;
    while(mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}
int a[2003];
int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	

	for(int i=0;i<n-1;i++)
	{
		a[i+1]=gcd(a[i],a[i+1]);
			count++;
	}
	if(a[n-1]!=1)
	{
		printf("-1\n");
		return 0;
	}
	for(int i=n-1;i>0;i--)
	{
		
		a[i-1]=gcd(a[i],a[i-1]);
		if(a[i-1]==1)
			count;
	}
	printf("%d\n",count);
	return 0;
}
