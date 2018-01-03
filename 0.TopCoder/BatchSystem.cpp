#include<map>
#include<string>
#include<vector>
using namespace std;

		vector<int>schedule(vector<int> duration, vector<string> user)
		{
			int N=duration.size();
			map<string,long long> jobTime;
			for(int n=0;n<N;n++) jobTime[user[n]]+=duration[n];
			vector<bool> done(N);
			vector<int> ans;
			while(ans.size()<N)
			{
				string next;
				for(int n=0;n<N;n++)
				{
					if(!done[n]&&(next.empty()||jobTime[user[n]]<jobTime[next]))
						next=user[n];
				}
				for(int n=0;n<N;n++)
				{
					if(user[n]==next)
					{
						done[n]=true;
						ans.push_back(n);
					}
				}
			}
			return ans;
		}

int main()
{
	vector<int> d;
	d.push_back(100);
	d.push_back(200);
	d.push_back(50);
	vector<string> u;
	u.push_back("Hor Ca");
	u.push_back("hor ca");
	u.push_back("YEAAAH");
	schedule(d,u);
	
}
