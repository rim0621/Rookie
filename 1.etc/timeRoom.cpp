#include<bits/stdc++.h>
using namespace std;
struct T{
	int start,end;
};
T times[10000];
bool sortA(T a, T b)
{
	return a.start<b.start;
}

vector<vector<int> > f(vector<vector<int> > time,int n)
{
	for(int i=0;i<n;i++)
	{
		times[i].start=time[i][0];
		times[i].end=time[i][1];
	}
	sort(times,times+n,sortA);
	vector<int> tmp;
	vector<vector<int> > ans;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int a=times[j].end-times[i].start;
			int b=times[i].end-times[j].start;
			if(a>0 && b>0)
			{
				tmp.push_back(min(times[i].start,times[j].start));
				tmp.push_back(max(times[i].end,times[j].end));
				ans.push_back(tmp);
				tmp.clear();
			}	
		
		}
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d",&n);
	vector<vector<int> > v;
	vector<int> tmp;
	vector<vector<int> > ans;
	int t1,t2;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&t1,&t2);
		tmp.push_back(t1);
		tmp.push_back(t2);
		v.push_back(tmp);
		tmp.clear();	
	} 
	ans=f(v,n);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	}
	return 0;
}
