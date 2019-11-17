#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	for(int num=1;num<=tc;num++){
		int res[21]={0,};

		int n,k,index;
		cin >> n;
		cin >> k;

		int line=0;
		int gap=0;
		for(int i=1;i<=n*k;i++)
		{
			if(line%2==0)
			{
				res[1+gap]+=i;

			}else{
				res[k-gap]+=i;
			}

			gap++;

			if(i%k==0){
				line++;
				gap=0;
			}

		}
		printf("#%d",num);
		for(int i=1;i<=k;i++)
		{
			printf(" %d",res[i]);
		}
		printf("\n");
	}
	return 0;

}
