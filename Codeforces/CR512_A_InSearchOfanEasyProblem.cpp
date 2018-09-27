#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int input[n];
	string output="EASY";
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		if(input[i] == 1)
		{
			output = "HARD";
		}
	}
	cout<<output<<endl;
	return 0;

}
