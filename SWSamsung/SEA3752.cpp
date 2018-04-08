/****************************************************************
	날짜	: 2018-04-06
	작성자	: 임중현
	문제	: 3572.가능한 시험 점수
	풀이	: 1.완전탐색 (시간초과),2. 배열을 설정해서(최대10000)숫자를 표시 하고 새로 받으면 표시된거 더함  
*****************************************************************/
#include<iostream>
#include<memory.h>
#include<vector>
using namespace std;

int ans[10004];

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin>> n;
		int c=0,input=0;
		memset(ans,0,10004*sizeof(int));
		for(int i=0;i<n;i++)
		{
			cin>>input;
			vector<int> v;
			int tmp=c;
			for(int j=0;j<10004;j++)
			{
				if(ans[j]==1)
				{
					if(ans[j+input]!=1){
			//ans[j+input]=1 로 했지만, 중간에 계산된 값과 더하게 됨으로 오류가 됨, 계산한거를 저장시킨후 따로 넣어주려고 벡터선언
						v.push_back(j+input);
						tmp--;c++;
					}else{
						tmp--;
					}
				}
				if(tmp==0)
				{
					for(vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
					{
						ans[*iter]=1;
					}
					break;
				}
			}
			if(ans[input]!=1)
			{
				ans[input]=1;
				c++;
			}
			

		}

		cout<<"#"<<test_case<<" "<<c+1<<endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
