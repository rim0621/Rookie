#include<stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;


int Answer;
int n,m;
int minCost=9999999;
int home[501];
int cost[501][501];
int sum[501];




int putBins( int bins,int index)
{
	bins--;
	int tmp=0;
	if(bins==0)
	{
		return sum[index];
	}
	for(int i=index;i<n;)
	{
		int s=sum[i];
		i++;
		tmp=abs(s-putBins(bins,i));
		cout<<tmp<<endl;
		bins++;
		minCost=min(minCost,tmp);
	}
	return 9999999;
}




int main(int argc, char** argv)
{

	int T, test_case;

	/*

	   The freopen function below opens input.txt file in read only mode, and afterward,

	   the program will read from input.txt file instead of standard(keyboard) input.

	   To test your program, you may save input data in input.txt file,

	   and use freopen function to read from the file when using cin function.

	   You may remove the comment symbols(//) in the below statement and use it.

	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.

	   But before submission, you must remove the freopen function or rewrite comment symbols(//).

	 */	



	// freopen("input.txt", "r", stdin);



	cin >> T;

	for(test_case = 0; test_case  < T; test_case++)
	{


		scanf("%d %d", &n,&m);
		int bins=m;	
		for(int i=0;i<n;i++)
		{
			scanf("%d", &home[i]);
		}
		sort(home,home+n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cost[i][j]=abs(home[i]-home[j]);
			}
		}

		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum[i]+=cost[i-1][j];
			}
		}

		if(m==n)
		{
			Answer=0;
		}
		else if( m==1)
		{
			sort(sum+1,sum+n+1);
			Answer=sum[1];
		}
		else
		{
			putBins(m,1);
			Answer=minCost;

		}
		// Print the answer to standard output(screen).

		cout << "Case #" << test_case+1 << endl;

		cout << Answer << endl;
	}
	return 0;
}
