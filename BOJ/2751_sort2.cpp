#include<bits/stdc++.h>
using namespace std;
int number[1000004];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	make_heap(number,number+n);
	sort_heap(number,number+n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",number[i]);
	}
	return 0;
}
