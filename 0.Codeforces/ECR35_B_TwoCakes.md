# Educational Codeforces Round 35/ B.Two Cakes
* [문제 링크](http://codeforces.com/problemset/problem/911/B)
* [코드 링크](https://github.com/rim0621/Rookie/tree/master/2.Codeforces)
* [블로그 풀이](http://rim0621.tistory.com/category/SW/Algorithm)
### 풀이
* 케익 두개를 한개는 a조각으로 다른하나는 b조각으로 나눈다.
* n명의 사람이 오는데 접시에 자른케익을 놓는다.
* 한 접시에는 적어도 한조각이 있어야한다.
* 두가지 종류의 케익을 같은 접시에 놓을 수 없다.
* (문제에) 접시에 최소 캐익의 조각 개수가 최대가 되도록 한다.
* min(a/i,b/(n-i)) : 접시에 최소 캐익의 조각.
* max(ans,min())  : 최대가 되도록

```C++
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int ans=0;
	for(int i=1;i<n;i++)
	{
		ans=max(ans,min(a/i,b/(n-i)));
	}
	cout<<ans<<endl;
	return 0;
}
```
