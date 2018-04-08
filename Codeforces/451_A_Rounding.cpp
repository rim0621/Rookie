#include<bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	scanf("%d",&input);
	int number=input%10;

	if(number>5)
	{
		input/=10;
		input+=1;
		input*=10;
	}
	else
	{
		input/=10;
		input*=10;
	}
	cout<<input<<endl;
	return 0;
}
