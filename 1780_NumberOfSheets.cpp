//1. 똑같지 않으면 3등분...
//2. 시작점에서 3등분한 사이즈r,c의 끝까지  r,c를 증가
//3. 중간에 다 같은게 되면 카운트++
//4. 다 안되면 마지막 한개 씩 알맞는 숫자에 카운트


#include<bits/stdc++.h>
using namespace std;
int paper[3000][3000];
int n;
int zero,one,negative;
void dividePaper(int r,int c, int size)
{
	if(size==1)	//4번
	{
		if(paper[r][c]==0)
			zero++;
		else if(paper[r][c]==1)
			one++;
		else
			negative++;
		return ;
	}
	for(int i=r;i<r+size;i++)	//2번
	{
		for(int j=c;j<c+size;j++)
		{
			if(paper[i][j]!=paper[r][c])
			{
				for(int k=0;k<3;k++)
				{
					for(int l=0;l<3;l++)
					{
						dividePaper(r+k*size/3,c+l*size/3,size/3); //1번
					}
				}
				return ;
			}
		}
	}

        if(paper[r][c]==0)	//3번
              zero++;
        else if(paper[r][c]==1)
               one++;
        else
             negative++;

	return ;
}


int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			scanf("%d",&paper[i][j]);
	}
	int size=n;
	
	
	dividePaper(1,1,size);

	cout<<negative<<endl;
	cout<<zero<<endl;
	cout<<one<<endl;
	return 0;
}
