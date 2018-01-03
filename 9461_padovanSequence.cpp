#include<bits/stdc++.h>
using namespace std;
long long cache[103];

int main()
{
	int testCase;
	scanf("%d",&testCase);
	for(int test=0;test<testCase;test++)
	{
		int input;
		scanf("%d",&input);
		cache[1]=cache[2]=cache[3]=1;
		for(int index=4;index<=input;index++)
		{
			cache[index]=cache[index-3]+cache[index-2];
		}
		
		printf("%lld\n",cache[input]);
		
	}
	return 0;
	
}
