/****************************************************************
	날짜	: 2018-04-10	
	작성자	: 임중현
	문제	:  3977. 페르마의 크리스마스 정리
	풀이	: 소수구하기  -> %4==1 자료구조저장 ->자료구조만 카운팅 
*****************************************************************/
#include<iostream>
#include<vector>
using namespace std;

int arr[1000002];


int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	vector<int> v;
	v.push_back(2);
	for(int i=2;i<=1000002;i++)		//소수 구하기(에라토스테네스의 체)
	{
		if(arr[i]==0){			//나머지도 여기서 한다면?
			for(int j=i+i;j<=1000002;j+=i)
			{
				arr[j]=1;
			}
			if(i%4==1)
				v.push_back(i);	
		}
	}
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int start,end,cnt=0;
		cin>> start >> end;
		for(vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
		{
			if(*iter>=start && *iter<=end)
			{
				cnt++;
			}
			else if(*iter>end)
				break;
		}

		cout<<"#"<<test_case<<" "<<cnt<<endl;
		
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
