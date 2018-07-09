/****************************************************************
	날짜	: 2018/07/02	
	작성자	: 임중현
	문제	: BOJ 11478.서로 다른 부분 문자열의 개수
	풀이	: while안에 크기(i)를 n(전체문자열크기)까지 순차적으로
				늘린다. i크기 만큼(문자개수) set에 저장하여 중복을 
				삭제한다.
*****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	set<string> s;
	string str;
	cin>>input;
	int i=1;
	int n=input.length();
	//시간초과
	while(i!=n)
	{
		for(int j=0;j<=n-i;j++)
		{
			str="";
			for(int k=j;k<i+j;k++)
			{
				str+=input[k];
			}
			s.insert(str);
		}
		i++;

	}
	/*for(set<string>::iterator iter=s.begin();iter!=s.end();++iter)
	{
		cout<<*iter<<endl;
	}
	*/
	cout<<s.size()+1<<endl;
	return 0;
}
