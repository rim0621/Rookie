
/****************************************************************
	날짜	: 2018-03-04	
	작성자	: 임중현
	문제	:평균값구하기  
	링크	:
*****************************************************************/

#include<iostream>
#define NUM 10
using namespace std;

int main()
{
	int testCase;
	cin>>testCase;
	for(int n=1;n<=testCase;n++)
	{
		int input[NUM];
		float sum=0;
		for(int i=0;i<NUM;i++)
		{
			cin>>input[i];
			sum+=input[i];
		}
		sum/=10;
		sum+=0.5;	
		cout<<"#"<<n<<" "<<(int)sum<<endl;
	}
	return 0;
}
