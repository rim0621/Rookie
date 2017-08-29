#include<iostream>
#include<deque>
using namespace std;
class Tomato_Box
{
 public:
	int x,y;	
	int data;

 public:
	Tomato_Box(){}
	void SetInfo(int x, int y, int data)
	{
		this->x=x;
		this->y=y;
		this->data=data;
	}

};


int main()
{	
	int n,m,data;
	cin>>m;
	cin>>n;
	
	int count=0;
	Tomato_Box **tomato=new Tomato_Box*[n];
	for(int i=0;i<n;i++) tomato[i]=new Tomato_Box[m];	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{  
			cin>>data;
			tomato[i][j].SetInfo(i,j,data);	
		}
	}
  	
  while(1){
	deque<Tomato_Box> dq;
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(tomato[i][j].data == 1)
			{
				dq.push_back(tomato[i][j]);
				tomato[i][j].SetInfo(i,j,2);
			}
		}
	}
 	
	if(dq.size()==0)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(tomato[i][j].data==0){
					cout<<-1<<endl;
		                for(int a=0;a<n;a++) delete[] tomato[a];
               			 delete[] tomato;
                		return 0;
				}
			}
		}
		cout<<count-1<<endl;
		for(int i=0;i<n;i++) delete[] tomato[i];
		delete[] tomato;
		return 0;
	}
	else
	{
		count++;
		

		for(int i=0;i<dq.size();i++)
		{
			int x=dq[i].x;
			int y=dq[i].y;
		
			if(x-1>=0 && tomato[x-1][y].data==0)
			{
				tomato[x-1][y].SetInfo(x-1,y,1);
			}
			if(x+1<n && tomato[x+1][y].data==0)
			{
				tomato[x+1][y].SetInfo(x+1,y,1);
			}
			if(y+1<m && tomato[x][y+1].data==0)
			{
				tomato[x][y+1].SetInfo(x,y+1,1);
			}
			if(y-1>=0 && tomato[x][y-1].data==0)
			{
				tomato[x][y-1].SetInfo(x,y-1,1);
			}			
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<tomato[i][j].data<<" ";
			}
			cout<<endl;
		}
	
		cout<<"--------------------------"<<endl;
 	}

   }


	return 0;
}
	


