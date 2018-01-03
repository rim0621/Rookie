#include<bits/stdc++.h>
using namespace std;

/*
2 0
1 4
3 3
*/


struct Point{
	int x,y;
};
bool f(Point const &a,Point const &b)
{
	if(a.x!=b.x)
		return a.x < b.x;
	else
		return a.y<b.y;
}
bool f1(Point const &a,Point const &b)
{
        if(a.y!=b.y)
                return a.y < b.y;
        else
                return a.x<b.x;
}


Point p[100004];
long long d[100004];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&p[i].x,&p[i].y);
	}
	sort(p,p+n,f);
	int tmp1,tmp2;
	for(int i=0;i<n-1;i++)
	{	
		tmp1=p[i+1].x-p[i].x;
		tmp2=p[i+1].y-p[i].y;
		d[i]=pow(tmp1,2)+pow(tmp2,2);
	}	
	sort(d,d+n-1);
	long long m=d[0];
	

	sort(p,p+n,f1);
        for(int i=0;i<n-1;i++)
        {
                tmp1=p[i+1].y-p[i].y;
                tmp2=p[i+1].x-p[i].x;
                d[i]=pow(tmp1,2)+pow(tmp2,2);
        }
	sort(d,d+n-1);
	m=min(m,d[0]);
	cout<<m<<endl;
	return 0;

}
