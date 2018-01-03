#include<bits/stdc++.h>
using namespace std;
bool Greater(const pair<int,int> &a, const pair<int,int> &b)
{
	return a.second>b.second;
}
int main()
{
	int numcase;
	cin>>numcase;
	for(int num=0;num<numcase;num++)
	{
		int N,M,weight,answer;
		deque<pair<int,int> >q;
		deque<int> qq;
		deque<pair<int,int> >::iterator begin_iter1;
		deque<int>::iterator begin_iter2;
		cin>>N>>M;
		for(int i=0;i<N;i++)
		{
			scanf("%d",&weight);
			qq.push_back(weight);
			q.push_back(pair<int,int>(i,weight));
		}

                for(deque<int>::size_type i=0;i<q.size();++i)
                {       
                   begin_iter1=q.begin()+i;
		   begin_iter2=qq.begin()+i;

                        while(qq[i] != *max_element(qq.begin()+i,qq.end()))
                        {
                                
                                        rotate(begin_iter1,begin_iter1+1,q.end());
                                        rotate(begin_iter2,begin_iter2+1,qq.end());
			}                        
 		}
		

		for(deque<pair<int,int> >::size_type i=0;i<q.size();++i)
		{
			if(q[i].first==M)
			{
				answer=i+1;
			}
		}
		cout<<answer<<endl;

   
	}
	return 0;
}

/*
int main()
{
	int numcase;
	cin>>numcase;
	for(int num=0;num<numcase;num++)
	{
		int N,M,weight;
		int flag=0;
		int answer=1;
		deque<int> q;
		cin>>N>>M;
		for(int i=0;i<N;i++)
		{
			scanf("%d",&weight);
			q.push_back(weight);
			
		}
		deque<int>::iterator begin_iter=q.begin();	
		deque<int>::iterator index=q.begin()+M; // 찾고자하는것을가리킴
		for(deque<int>::size_type i=0;i<q.size();++i)
		{	
                                begin_iter=q.begin()+i;


			while(q[i] != *max_element(q.begin()+i,q.end())&&flag==0)
			{



				if(begin_iter!=index)
				{
                                        rotate(begin_iter,begin_iter+1,q.end());
					index=index-1;
					
				}
				else	//인덱스가 처음에서 맨 뒤로 갈떄
				{
                                        rotate(begin_iter,begin_iter+1,q.end());
					index=q.end()-1;
				}
				
	    		     for(deque<int>::iterator iter=q.begin();iter!=q.end();++iter)
        	                {
					if(iter==index)
						cout<<"("<<*iter<<")"<<" ";
					else if(iter==begin_iter)
						cout<<"["<<*iter<<"]"<<" ";
						
					else
                	                	cout<<*iter<<" ";
                        	}
                        	cout<<endl;
                                if(q[i]==*max_element(q.begin()+i,q.end()) && begin_iter==index)
                                {
                                        flag=1;
					break;
                                }

			}
		}
		for(deque<int>::iterator iter=q.begin();iter!=q.end();++iter)
		{
			if(index==iter)
			{
			 	break;
			}
			answer++;
		}
		cout<<"정답:"<<answer<<endl;
	}
	return 0;


}*/
