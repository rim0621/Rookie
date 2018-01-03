#include<iostream>

using namespace std;


void LeastCommon(int n,int m)
{
                int x1,x2;
                int j=1, k=1;


                while(1)
                {
                        x1=n*j;
                        x2=m*k;
                        if(x1==x2)
                        {
                                cout<<x2<<endl;
                                break;
                        }
                        else if(x1>x2)
                                k++;
                        else
                                j++;
                }

        
	
}


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n;
		cin>>m;

		void (*pf) (int,int);
		pf=LeastCommon;
		pf(n,m);
	}


	return 0;

}
