/****************************************************************
  날짜	: 2018/06/04 Mon
  작성자: 임중현
  문제	: 백준 10799.쇠막대기 (https://www.acmicpc.net/problem/10799)
  풀이	: '()' 이것이 나오면 그전에 '(' 개수 만큼 잘린게 나온다. '))' 이렇게 연속으로 나오면 1개가 더 추가되서 나오는 것을 예시를 통해 알 수 있다.
  문제점: 메모리초과 ->  재귀를 메인에 풀어쓰고, ans 가 int형이면 메모리를 초과하여 long long형으로 바꾸었다.
 *****************************************************************/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

long long ans;

/*
// 재귀는 메모리 초과 발생
void cut(string s, vector<char> c, int n)
{
	if(s.size()==n)
		return ;

	// debugging
	cout<<ans<<endl;
	for(vector<char>::iterator iter=c.begin();iter!=c.end();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;


	if(s[n-1]=='(' && s[n]==')')
	{
		c.pop_back();
		ans+=c.size();
		cut(s,c,n+1);
	}
	else if((!c.empty()) && s[n-1]==')' && s[n]==')')
	{
		ans+=1;
		c.pop_back();
		cut(s,c,n+1);
	}
	else
	{
		c.push_back(s[n]);
		cut(s,c,n+1);
	}
}

*/

int main()
{
	string s;
	cin>>s;
	vector<char> c;
	c.push_back(s[0]);
	
	for(int n=1;n<s.size();n++){
		if(s[n-1]=='(' && s[n]==')')
		{
			c.pop_back();
			ans+=c.size();
		}
		else if((!c.empty()) && s[n-1]==')' && s[n]==')')
		{
			ans+=1;
			c.pop_back();
		}
		else
		{
			c.push_back(s[n]);
		}
	}

	cout<<ans<<endl;
	return 0;
}
