#include<iostream>
using namespace std;
#define MAX 1001
int cache[MAX][MAX];
int Bino(int n,int k);
int main()
{

	int n,k;
	cin>>n;
	cin>>k;
	int (*fptr)(int,int);
	fptr=Bino;
	cout <<fptr(n,k)<<endl;
	

	return 0;
}

int Bino(int n,int k)
{
	if(cache[n][k]>0)
        {
                return cache[n][k];
        }
        else if(k==0 ||n==k)
        {
                
                return cache[n][k]=1;
        }
        else
        {
               return  cache[n][k]=(Bino(n-1,k-1)+Bino(n-1,k))%10007;
               
        }
}

