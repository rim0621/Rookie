#include<bits/stdc++.h>
using namespace std;

struct Virus{
	int r,c;
	Virus()
	{
		r=0;
		c=0;
	}
};
Virus v[70];
int lab[14][14];
int n,m;
int nextX[]={0,1,-1,0};
int nextY[]={1,0,0,-1};
int Answer;
int wall=3;
int count(int (*l)[14])
{
        int c=0;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
                        if(l[i][j]==0)
                                c++;
                }
        }
        return c;
}


int destributeVirus(vector<Virus> p)
{
	int tmp[14][14];
	memcpy(tmp,lab,sizeof(lab));

	while(!p.empty())
	{
		int s=p.size()-1;
		Virus position=p[s];
		p.pop_back();
		Virus nextP;
		for(int i=0;i<4;i++)
		{
			nextP.r=position.r+nextX[i];
			nextP.c=position.c+nextY[i];
			if((nextP.r >= 0 && nextP.r < n) && (nextP.c >= 0 && nextP.c < m))
			{
                                if(tmp[nextP.r][nextP.c]==0)
                                {
                                        tmp[nextP.r][nextP.c]=2;
                                        p.push_back(nextP);
                                }

			}
		}
	
	}

	int safeZone=count(tmp);
	return safeZone;


}
void putwall(int row,int col,vector<Virus> p)
{


	if(row >= n || col >= m)
	{
		return ;
	}   

	if(lab[row][col]==0)
	{
		lab[row][col]=1;
		wall--;
	}
	else
	{
		return ;
	}

	if(wall==0)
        {
                int min_tmp=destributeVirus(p);
                Answer=max(Answer,min_tmp);
		wall++;
		lab[row][col]=0;
                return ;
        }

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		        putwall(i,j,p);

		}
		
	}
	lab[row][col]=0;
	wall++;
}


int main()
{
	cin>>n>>m;
	int state;
	wall=3;
	int countVirus=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>lab[i][j];
			if(lab[i][j]==2)
			{
				v[countVirus].r=i;
				v[countVirus].c=j;
				countVirus++;	
			}
		}
	}

	vector<Virus> p;
	for(int i=0;i<countVirus;i++)
	{
		p.push_back(v[i]);
	}


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			putwall(i,j,p);
		}

	}
	cout<<Answer<<endl;	
	return 0;
}
