// 두팀을 3명 3명으로 만들어야됨!

#include<iostream>

using namespace std;

int total(int *student,int number,int sum,int i,int k)
{
	int a=0;
	k++;
	sum+=student[i];
	if(i>5 || sum>number)
		return 0;
	if(sum==number&&k==3)
		return 1;
//	cout<<i<<":"<<sum<<" "<<number<<endl;
	for(int j=1;j<=5;j++)
	{
		a+=total(student,number,sum,i+j,k);
	}
	if(a>0)
		return 1;
	else
		return 0;
}

int main()
{
	int student[6];
	int sum=0;
	for(int i=0;i<6;i++)
	{
		cin>>student[i];
		sum+=student[i];
	}
	if(sum%2!=0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		sum=sum/2;
		int ans=total(student,sum,0,0,0);
		if(ans==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}
