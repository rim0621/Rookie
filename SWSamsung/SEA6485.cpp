//6485.삼성시의 버스 노선(D3)
//임중현 20181212
//풀이 : 노선이 겹치는걸 구하면 버스정류장을 거치는 노선의 개수가 된다.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	for(int index=1;index<=tc;index++)
	{
		int bus[5001];
		memset(bus,0,sizeof(bus));
		int n,a,b;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			for(int j=a;j<=b;j++)
			{
				bus[j]+=1;
			}
		}

		int p,c;
		cin>>p;
		cout<<"#"<<index<<" ";
		for(int i=0;i<p;i++)
		{
			cin>>c;
			cout<<bus[c]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
