#include<bits/stdc++.h>
using namespace std;
int number[100005];

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&number[i]);
	}
	for(int i=1;i<=m;i++)
	{
		int tmp[100005];
		int start,end,pos;
		scanf("%d %d %d",&start,&end,&pos);
		for(int j=0;j<=end-start;j++)
		{
			tmp[j]=number[start+j];
		}	
		make_heap(tmp,tmp+end-start+1);
		sort_heap(tmp,tmp+end-start+1);
		printf("%d\n",tmp[pos-1]);
			
		
	
		for(int a=0;a<=end-start;a++)
			cout<<tmp[a]<<" ";
		cout<<endl;
	}
	return 0;

}
