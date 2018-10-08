#include<bits/stdc++.h>
using namespace std; 


//높은 것 부터 찾기위해 밑으로(--)


int main()
{
	int p,y;
	cin>>p>>y;
	int flag=0;
	for(int i=y;i>p;i--)
	{
		for(int j=2;j<=p&&j*j<=i;j++)	//j*j = y/x * x
		{
			if(i%j!=0)
			{
				flag=1;
			}else
			{
				flag=0;
				break;
			}
			
		}
		if(flag==1)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
