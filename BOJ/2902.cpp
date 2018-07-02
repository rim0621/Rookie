/****************************************************************
	날짜	: 2018/07/02	
	작성자	: 임중현
	문제	:  BOJ 2902.kmp는 왜 kmp일까?
	풀이	:  첫번째 문자 + 하이픈 뒤글자들만 저장시켜 출력한다.
 *****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input,output="";
	cin>>input;
	output+=input[0];
	for(int i=1;i<input.length();i++)
	{
		if(input[i-1]=='-')//하이픈 뒷 글자 저장
		{
			output+=input[i];
		}
	}
	cout<<output<<endl;
	return 0;

}
