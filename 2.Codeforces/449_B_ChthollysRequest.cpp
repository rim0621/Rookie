/*
 펠린드롬 짝수 자리수
 11,22...1001,1111,1221....
 
*/
#include<bits/stdc++.h>
using namespace std;
long long sum;


int main()
{
	int k,q;
	cin>>k>>q;
	for(int i=1;i<=k;i++)
	{
		long long c=i;
		long long n_digit=i;
		while(c!=0)
		{
			cout<<n_digit<<"*10+("<<c<<"%10)"<<endl;
	
			n_digit=n_digit*10+(c%10);

			cout<<n_digit<<endl;			

			c/=10;
		}
		sum+=n_digit;
	}
	cout<<sum%q<<endl;
	return 0;
}
