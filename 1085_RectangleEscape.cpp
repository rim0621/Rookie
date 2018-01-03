#include<bits/stdc++.h>
using namespace std;

int findLine(int x,int y, int w, int h);

int main()
{

	int x,y,w,h;
	
	scanf("%d %d %d %d",&x,&y,&w,&h);

	cout<<findLine(x,y,w,h)<<endl;
	return 0;
}


int findLine(int x,int y,int w, int h)
{

	return min(min(abs(x-0),abs(x-w)),min(abs(y-h),abs(y-0)));
}
