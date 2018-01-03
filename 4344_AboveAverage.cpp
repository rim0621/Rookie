#include<bits/stdc++.h>
using namespace std;

float roundFuction(float value)
{	
//	cout<<value<<endl;
	return floor((value*pow(10,3)+0.5f))/pow(10,3);
}

float ratio(int *student,int n)
{
	int total=0;
	double average=0;
	for(int i=1;i<=n;i++)
	{
		total+=student[i];
	}
//	cout<<fixed;
	average=(float)total/(float)n;
//	cout<<total<<" "<<average<<endl;
	int count=0;	
	for(int i=1;i<=n;i++)
	{
		if(student[i]>average)
		{
			count++;
		}	
	}
//	cout<<count<<endl;	
	return roundFuction((float)count/(float)n*100);
	
}

int main()
{
	int nCase;
	scanf("%d",&nCase);
	for(int n=0;n<nCase;n++)
	{
		int number;
		int student[1003];
		scanf("%d",&number);
		for(int i=1;i<=number;i++)
		{
			scanf("%d",&student[i]);
		}
		cout.precision(3);
		cout<<fixed<<ratio(student,number)<<"%"<<endl;;
	}
	return 0;
	
}
