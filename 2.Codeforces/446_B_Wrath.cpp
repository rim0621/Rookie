#include<bits/stdc++.h>
using namespace std;
int claw[1000003];
int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&claw[i]);
	}
	for(int j=1;j<=n;j++)
	{
		for(int i=j+1;i<=n;i++)
		{
			if( j>=i-claw[i])
			{
				count++;
				break;
			}
		}
	}
	printf("%d\n",n-count);

	return 0;	
}
