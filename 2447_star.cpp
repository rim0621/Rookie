#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int a,b;
			a=i;
			b=j;
			for(;a>0;a/=3,b/=3){
				if(a%3==1 && b%3==1)
				{
					break;
				}
			}
			if(a==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
