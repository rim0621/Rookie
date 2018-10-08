#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,L,a;
	cin>> n >> L >> a;
	int ti,li,last=0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>ti>>li;
		ans+= (ti-last)/a;	//손님오기전 되는것 체크
		last = ti +li;		//	손님마지막체크
	}
	ans+= (L-last)/a;
	cout<<ans<<endl;
	return 0;
}
