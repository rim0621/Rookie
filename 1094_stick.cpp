#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> //accumulate_function
using namespace std;
class Plus
{
	 int total;
 public:
	explicit Plus(int init=0):total(init){}
	void operator() (int& n)
	{
		total+=n;
		n=total;
	}	
};
int main()
{
	int stick_len=64;
	int x;
	cin>>x;
	vector<int> stick;
	stick.push_back(stick_len);
	
	while(accumulate(stick.begin(),stick.end(),0)!=x)
	{
		if(accumulate(stick.begin(),stick.end(),0)>=x)
		{
			stick.pop_back();
			stick_len/=2;
			stick.push_back(stick_len);
		}
		else
		{
			stick.pop_back();
			stick.push_back(stick_len);
			stick_len/=2;
                        stick.push_back(stick_len);

		}
			
//		for(vector<int>::size_type i=0; i<stick.size();++i)
//			cout<<stick[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<1000000000;i++){}
		
	}
	cout<<stick.size()<<endl;
	return 0;
}






