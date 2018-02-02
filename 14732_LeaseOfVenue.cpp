/******************************************************************************
	작성자	: 임중현
	문제	: 백준 14732번 행사장 대여
	풀이	: 결국 사각형의 넓이를 구하는 문제이다. 가장 편한 방법은 한칸
		  의 넓이는 결국 1임으로 전체 크기 배열을 잡고 주어진 좌표를 
		  가지고 범위만큼 전체 배열을 1로 채운다. 그리고 마지막에 1인
		  배열의 카운트를 하면 넓이가 나온다.   
******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int area[501][501];
int main()
{
	int n;
	cin>>n;
	int x1,y1,x2,y2;
	int minX=9999,minY=9999,maxX=0,maxY=0;
	for(int i=0;i<n;i++)
	{
	
		cin>>x1>>y1>>x2>>y2;

		minX=min(minX,min(x1,x2));
		minY=min(minY,min(y1,y2));
                maxX=max(maxX,max(x1,x2));
                maxY=max(maxY,max(y1,y2));
		
		for(int x=x1;x<x2;x++)
		{
			for(int y=y1;y<y2;y++)
			{
				area[x][y]=1;
			}
		}
	}



	int answer=0;
	for(int i=minX;i<=maxX;i++)
	{
		for(int j=minY;j<=maxY;j++)
		{
			if(area[i][j]==1)
			{
				answer++;
			}
		}

	}
	cout<<answer<<endl;


	return 0;
}
