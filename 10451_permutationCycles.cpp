/*
   map-> 덱에 넣고 처음과 끝이 같아지면 카운트 증가->덱에 들어있는 요소들 맵에서 삭제->맵이 빌때까지 go
*/

#include<bits/stdc++.h>
using namespace std;

int findCycles(map<int,int> m)
{
	int count=0;
	while(!m.empty())
	{
		deque<int> tmp;
		map<int,int>::iterator iter=m.begin();
		tmp.push_back(iter->second);
		tmp.push_back(m[tmp[0]]);
		while(*tmp.begin()!=*(tmp.end()-1))
		{
			tmp.push_back(m[*(tmp.end()-1)]);
		}
		count++;
		while(tmp.size()!=1)
		{
			m.erase(*tmp.begin());
			tmp.pop_front();
		}
	}

	return count;
}


int main()
{
	int tc; scanf("%d",&tc);
	for(int num=0;num<tc;num++)
	{
		map<int,int> m;
		int n; scanf("%d",&n);
		int tmp;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&tmp);
			m.insert(pair<int,int>(i,tmp));
		}
		int ans=findCycles(m);

		cout<<ans<<endl;

	}

		
	return 0;
}
