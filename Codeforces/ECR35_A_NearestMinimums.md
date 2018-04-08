# Educational Codeforces Round 35/ A.NearestMinimums
* [문제 링크](http://codeforces.com/problemset/problem/911/A)
* [코드 링크](https://github.com/rim0621/Rookie/tree/master/0.Codeforces)
* [블로그 풀이](http://rim0621.tistory.com/category/SW/Algorithm)
### 풀이
* 영어가 약해서 무슨말인지 이해하기 힘들었다.
* 주어진 숫자 중 최소끼리 가장 가까 운 거리를 구하는 것 이다.
* 3 4 6 3 중 3 이 최소.. 3 에서 3은 3칸 이므로 답은 3 이다.

```C++
int input[100004];
int main()
{
	int n;
	cin>>n;
	long long min_n=1000000003;
	int distance=100000000;
	int ans=10000000;
	for(int i=1;i<=n;i++)
	{
		cin>>input[i];
		if(min_n>input[i])
		{
			min_n=input[i];
			distance=i;
			ans=100000000;
		}
		else if(min_n==input[i])
		{
			ans=min(i-distance,ans);   //최소값들 중에 거리가 더 가까운 것은?
			distance=i;
		}

	}
	cout<<ans<<endl;
	return 0;
}

```
