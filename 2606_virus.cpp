#include<bits/stdc++.h>
using namespace std;

bool computer[104][104];

int countComputer(int n)
{
	vector<int> v;
	v.push_back(1);
	for(int i=1;i<=n;i++)
	{
		if(computer[v[0]][i]==true){
			v.push_back(i);
		}
	}
	if(v.size()!=1)
	{
		for(int i=1;i<v.size();i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(computer[v[i]][j]==true)
				{	
					for(int k=0;k<v.size();++k)
					{
						if(v[k]==j)
						{
							break;
						}
						if(k==v.size()-1)
						{
							v.push_back(j);
						}
					}
					
				}
			}
		
		}
			
for(vector<int>::iterator it=v.begin();it!=v.end();++it)
	cout<<*it<<" ";
cout<<endl;
	}
	
	return v.size()-1;
}



int main()
{
	memset(computer,false,sizeof(computer));
	int numberComputer;
	int numberEgde,a,b;
	int lastComputer=0;
	scanf("%d",&numberComputer);
	scanf("%d",&numberEgde);
	for(int i=0;i<numberEgde;i++)
	{
		scanf("%d %d",&a,&b);
		computer[a][b]=true;
		computer[b][a]=true;
		lastComputer=max(lastComputer,max(a,b));
	}	
	int ans=countComputer(lastComputer);
	printf("%d\n",ans);
	
	return 0;

}
