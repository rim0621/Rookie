// (x2-x1)^2+(y2-y1)^2

#include<bits/stdc++.h>
using namespace std;
struct Point{
	int x,y;
};

int f(Point &a, Point &b)
{
	return pow(b.x-a.x,2)+pow(b.y-a.y,2);
}
bool Less(Point const &a, Point const &b)
{
	if(a.x==b.x)
	{
		return a.y>b.y;
	}
	return a.x>b.x;

}
Point p[100002];
int main()
{
	int tc,answer;
	scanf("%d",&tc);
	for(int n=0;n<tc;++n)
	{
		scanf("%d %d",&p[n].x,&p[n].y);
	}

	sort(p,p+tc,Less);
	answer=f(p[0],p[1]);
	for(int n=1;n<tc-1;n++)
	{
		answer=min(answer,f(p[n],p[n+1]));
	}
	
	cout<<answer<<endl;

	return 0;
}
