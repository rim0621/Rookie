#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int map[24][24];
int N;
struct Route{
	int r,c,number;
	Route(int _r,int _c,int _n): r(_r),c(_c),number(_n)
	{}
};
int ans;
int nextR[]={1,1,-1,-1};
int nextC[]={1,-1,-1,1};


int check(vector<Route> v)
{
	vector<int> direction;
	direction.push_back(-1);
	int c=4;
	for(vector<Route>::size_type i=1;i<v.size();++i)
	{
		for(int j=0;j<4;j++){
			if(v[i].r-v[i-1].r== nextR[j] && v[i].c-v[i-1].c == nextC[j])
			{
				if(c==0)
				{
					return 0;
				}
				if(direction[direction.size()-1]!=j){
					direction.push_back(j);
					c--;
					break;
				}
			}
		}
	}	
	
/*	cout<<"direction : ";
	for(vector<Route>::size_type i=0;i<direction.size();i++)
		cout<<direction[i]<<" " ;
	cout<<endl;*/
	return 1;
}
void tour(int r,int c,vector<Route> v)
{
	if(r<1 || r>N || c<1 || c>N)
	{
		return ;
	}
	int vsize=v.size();	
	if(vsize>3 && v[0].r == r && v[0].c == c)
	{	
		if(ans<vsize && check(v)){
			ans=max(ans, vsize);
			
			for(vector<Route>::size_type i=0;i<v.size();i++)
				cout<<v[i].number<<" " ;
			cout<<endl;
		}
		return ;
	}
	if(check(v)==0){
		return ;
	}
	vector<Route>::size_type i;

	for(i=0;i<v.size();i++)
		if(v[i].number==map[r][c])
			return ;

	v.push_back(Route(r,c,map[r][c]));
	
	
	for(int i=0;i<4;i++)
	{
		tour(r+nextR[i],c+nextC[i],v);
	}
}	

int main()
{
	int T;
	cin>> T;
	for(int test_case=1;test_case<=T;test_case++)
	{
		cin>>N;
		ans=-1;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=N;j++)
				cin>>map[i][j];
		
		vector<Route> v;
		for(int i=1;i<=N-2;i++)
			for(int j=2;j<=N-1;j++)
				tour(i,j,v);
	
		cout<<"#"<<test_case<<" "<<ans<<endl;	
	}

	return 0;
}
