#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int v[250*501+600];
int t[250*501+600];


int f(int index,int line)
{

	
	int count=0;
	for(int i=index-1;i>=0;i--)	//0~14 =index=15
	{
/*		if(i==10)
		{
			cout<<v[10]<<":"<<t[i+line]<<" "<<t[i+line-1]<<endl;
		}
*/
		t[i]=max(v[i]+t[i+line],v[i]+t[i+line-1]);

		count++;
		if(line-1==count)
		{
			count=0;
			line--;
		}
	}
	return max(v[0]+t[1],v[0]+t[2]);
}







//node 개수는 line수의 시그마1~line 개수

int main()
{ 	
	int line;
	cin>>line;
	int nodeNum=(line*(line+1))/2;
	for(int i=0; i<nodeNum;i++)
		scanf("%d",&v[i]);

	cout<<f(nodeNum,line+1)<<endl;
//	for(int i=0;i<nodeNum;i++)
//		cout<<t[i]<<" ";
	return 0;

}
