#include<bits/stdc++.h>
using namespace std;
int lo[1000003],b,here,n;


int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &b);
		while (lo[here] && i - b <= lo[here]) 
						here--;
		lo[++here] = i;
	}
	printf("%d\n", here);
	return 0;
}

//i>j임으로 배열의 현재에서 왼쪽만 죽일수 있다.
//lo에 j인덱스를 넣는다.
// 현재인덱스 - 발톱길이 <= 앞 인덱스
//죽일 수 있으면 here을 낮추어 앞앞 인덱스를 확인해서 비교...
//죽일수 있는데 까지 죽이고 here을 하나 올리고(현재사람 포함하는 것) 다음(또는 끝) 
