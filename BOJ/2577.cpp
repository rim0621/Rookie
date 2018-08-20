#include<iostream>

using namespace std;

int count[10];

int main()
{
	int A,B,C;
	
	cin>> A>>B>>C;
	
	int mul=A*B*C;
	int number;
	while(mul!=0)
	{
		number = mul%10;
		count[number]++;
		mul/=10;
	}

	for(int i=0;i<10;i++)
	{
		cout<<count[i]<<endl;
	}
	return 0;

}
