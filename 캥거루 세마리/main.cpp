#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	int right, left;
	cin >> a; cin >> b; cin >> c;

	right = c - b;
	left = b - a;

	if (right > left)
	{
		cout << right - 1;
	}
	else
	{
		cout << left - 1;
	}
	return 0;
}