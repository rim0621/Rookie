#include<iostream>
using namespace std;
int main()
{
      	int train=0;
	int max=0;
	int geton[4];
	int getoff[4];
	for(int i=0;i<4;i++)
	{
		cin>>getoff[i];
		cin>>geton[i];
	}
	max=getoff[0];
	for(int i=0;i<4;i++)
	{
		train-=getoff[i];
		if (max<train)
			max=train;
		train+=geton[i];
		if(max<train)
			max=train;
	}
	
	cout<<max<<endl;
	return 0;
}
