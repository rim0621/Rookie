//받은 배열중 1을 만들면 남어진 계산

#include<bits/stdc++.h>
using namespace std;
int a[2003];
int findOne(int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
	
		if(a[i]==1)
		{
			count++;
		}
	}
	return count;
}
bool noTwo(int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			continue;	
		}
		return false;
	}
	return true;
}

bool noThree(int n)
{
        for(int i=0;i<n;i++)
        {
                if(a[i]%3==0)
                {
                        continue;
                }
                return false;
        }
        return true;
}

int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bool state2=noTwo(n);
	bool state3=noThree(n);
	if(state2 || state3)	//2 or 3 의 배수면 최대공약수를 못구하니깐
	{
		printf("-1\n");
		return 0;
	}	
	int b=findOne(n);	//1을 가지고 있으면 다 최대공약수로 1를 구할수 있음
	if(b!=0)
	{
		printf("%d\n",n-b);
	}
	else
	{
		while(b==0)
		{
			for(int i=1;i<n;i++)
			{
				a[i-1]=__gcd(a[i],a[i-1]);
				if(a[i-1]==1)	//최대공약수중 한개가 1이되면 다 1로만들수 있으니깐 break;	
					break;
			}
			b=findOne(n);
			count++;	
		}
		printf("%d\n",n+count-b);
	}
	return 0;
}


//fuction =>  __gcd(a,b);
