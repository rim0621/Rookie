#include<bits/stdc++.h>
using namespace std;
int tmp[5000005];

/*int bisearch(int tmp[],int start , int end,int k)
{
	int mid=end-start;
	if(tmp[mid]==k)
		return mid;
	else
	{
		if(tmp[mid]<k) // right
			bisearch(tmp,mid+1,end,k);
		else
			bisearch(tmp,start,mid-1,k);
	}
}

*/
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&tmp[i]);
	}
//	sort(tmp+1,tmp+n+1);
//	printf("%d\n:",bisearch(tmp,1,n,k));
	nth_element(tmp+1,tmp+k,tmp+n+1);//소팅..(정렬이 안되있을때 몇번째 요소 찾을때 좋음)
	printf("%d\n",tmp[k]);
	return 0;
}
