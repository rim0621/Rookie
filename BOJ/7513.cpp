/****************************************************************
	날짜	: 2018-06-08	
	작성자	: 임중현
	문제	: 백준 7513.준살 프로그래밍 대회 
	풀이	: 들어온 단어를순서대로  맵에 매핑하고 숫자(마지막에들어오는)대로 뽑음 
*****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int tc=1; tc<=t; tc++)
	{
		int m,n,k;
		cin>>m;
		map<int,string> mapping;
		string input;

		for(int i=0;i<m;i++)
		{
			cin>>input;
			mapping.insert(make_pair(i,input));
		}
		cin>>n;
		string s[n];
		int num;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			for(int j=0;j<k;j++)
			{
				cin>>num;
				s[i]+=mapping[num];
			}
		}
		printf("Scenario #%d:\n",tc);
		for(int i=0;i<n;i++)
		{
			cout<<s[i]<<endl;
		}
	cout<<endl;	//출력에 테스트케이스 사이에 빈 줄을 출력한다.
	}

	return 0;
}

