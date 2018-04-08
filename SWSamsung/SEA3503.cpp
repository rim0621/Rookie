/****************************************************************
	날짜	: 2018-04-08
	작성자	: 임중현
	문제	: 3503. 초보자를 위한 점프대 배치하기(5)
	풀이	:   
*****************************************************************/
#include<set>
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	int ans;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n,input;
		cin>>n;
		vector<int> s;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			s.push_back(input);
		}
		sort(s.begin(),s.end());
		vector<int>::reverse_iterator riter;
		deque<int> q;
		int c=s.size();
		for(riter=s.rbegin();riter!=s.rend();++riter)
		{
			if(c%2==0)
			{
				q.push_back(*riter);
				c--;
			}
			else
			{
				q.push_front(*riter);
				c--;
			}
		}
		if(q.size()==1)
			ans=0;
		else{
			int m=0;
			for(deque<int>::size_type i=1;i<q.size();i++)
			{
				int a=abs(q[i]-q[i-1]);
				if(a>m)
				{
					m=a;
				}
			}		
			ans=m;	

		}	
		cout<<"#"<<test_case<<" "<<ans<<endl;
		for(deque<int>::iterator i=q.begin();i!=q.end();++i)
		{
			cout<<*i<<" ";
		}
		cout<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
