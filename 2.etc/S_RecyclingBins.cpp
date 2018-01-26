//O(m*n)

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
vector<int> homeHasBins;
int putBins( int bins,int index)
{
	if(bins==0)
	{
		//현재 쓰레기통을 가지고 있는 집들
/*		for(vector<int>::iterator iter = homeHasBins.begin(); iter!=homeHasBins.end();++iter)
		{
			cout<<*iter<<" ";
		}
		cout<<endl;
*/
		//계산
		int cost,tmpCost=0;
		for(int i=0;i<n;i++)
		{
			cost=999999;
			for(vector<int>::iterator iter=homeHasBins.begin();iter!=homeHasBins.end();++iter)
			{
				if(i != *iter)
					cost=min(cost,abs(home[i]-home[*iter]));
				else
					cost=0;	
			}
//			cout<<"cost="<<cost<<endl;
			tmpCost+=cost;
		}
//		cout<<"tmpCost="<<tmpCost<<endl;	
		minCost=min(tmpCost,minCost);
		homeHasBins.pop_back();
		return 0;
	}
	//쓰레기통만큼 집에 배치 하기 
	for(int i=index;i<n;)
	{
		
		homeHasBins.push_back(i);
		bins--;
		i++;
		putBins(bins,i);
		bins++;
		if(homeHasBins.size()!=bins && m!=1)
		{
			homeHasBins.pop_back();		
		}
	}
	return 0;
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
		minCost=9999999;

		Answer = 0;

		///////////////////////////////////////////////////

		scanf("%d %d", &n,&m);
		int bins = m;
		for(int i=0;i<n;i++)
		{
			scanf("%d", &home[i]);
		}

//		sort(home,home+n);
		if(m==n)
		{
			Answer=0;
		}	
		else{
			putBins(bins,0);


			Answer=minCost;
		}
		/////////////////////////////////////////////////////////

		

		// Print the answer to standard output(screen).

		cout << "Case #" << test_case+1 << endl;

		cout << Answer << endl;

	}



	return 0;//Your program should return 0 on normal termination.

}
