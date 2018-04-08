/*#include<bits/stdc++.h>
using namespace std;
long long dp[2000];
long long n,k,a,b;
int  cnt;
void cost(long long x,long long k,long long a,long long b)
{
	int next_x=x*k;
	if(n<=x)
	{
		return ;	
	}

	if(next_x <= n){
		dp[cnt]=dp[cnt-1]+min((next_x-x)*a,b);
		cout<<next_x<<" : "<<dp[cnt]<<endl;
		cnt++;
		cost(next_x,k,a,b);
	}
	else{
		dp[cnt]=dp[cnt-1]+(n-x)*a;
		cout<<next_x<<"  "<<n-x<<" :: "<<dp[cnt]<<endl;
		cnt++;
	}
}


int main()
{
	cin>>n>>k>>a>>b;
	long long ans=0;
	dp[cnt]=0;
	cnt++;	
	cost(1,k,a,b);
	for(int i=0;i<=cnt;i++)
	{
		cout<<i<<"->"<<dp[i]<<endl;
	}
	return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,a,b;
	cin>>n>>k>>a>>b;
	long long x=n;
	long long m=0;
	long long ans=0;
		while(1)
		{
			if(x==1)
				break;

			if(x%k==0)
			{
				x=x/k;
				ans+=b;
			}
			else
			{
				m=x%k;
				x-=m;
				ans+=m*a;
			}
/*			if(x<k)
			{
				ans+=x*a;
				x=1;
			}*/
		}


	
	cout<<ans-a<<endl;
	
	return 0;
}
