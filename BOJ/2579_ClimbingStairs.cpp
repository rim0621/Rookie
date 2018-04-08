#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int numCase;
	int input,tmp;
	int count=0;
	vector<int> stairs;
	vector<int> score;
	cin>> numCase;
	stairs.push_back(0); //start point
	score.push_back(0);
	for(int i=0;i<numCase;i++)
	{
		cin>>input;
		stairs.push_back(input);
	}
	
	for(vector<int>::size_type i=1; i<stairs.size();++i)
	{
		if(i<3)
		{
			score.push_back(stairs[i-1]+stairs[i]);
		}
		else if(i==3)	//시작포인트를 0으로 줘서 없어도 가능
		{
			tmp=max(stairs[i-1]+stairs[i],score[i-2]+stairs[i]);
			score.push_back(tmp);
		}
		else
		{
			tmp=max(stairs[i]+stairs[i-1]+score[i-3],stairs[i]+score[i-2]);
			score.push_back(tmp);
		}
	}
	cout<<score[numCase]<<endl;
	return 0;
}
