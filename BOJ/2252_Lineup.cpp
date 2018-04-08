#include<bits/stdc++.h>
using namespace std;

struct Node{
	short number;
	short count;
	vector<int> conn;
};
Node node[32002];
int main()
{
	int n,m;
	int shorter,taller;
	scanf("%d %d",&n,&m);
	
	for(int i=1;i<=n;i++)
	{
		node[i].number=i;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&shorter,&taller);
		node[shorter].conn.push_back(taller);
		node[taller].count++;
	}
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		if(node[i].count==0){
			v.push_back(i);
		}
	}
	int tmp;
	int next;
	while(!v.empty())
	{
		tmp=v.back();
		v.pop_back();
		printf("%d ",tmp);
		for(int i=0;i<node[tmp].conn.size();i++)
		{
				next=node[tmp].conn[i];
				node[next].count--;
				if(node[next].count==0)
				{
					v.push_back(next);
				}
		}
	}
	printf("\n");		
	return 0;

}
