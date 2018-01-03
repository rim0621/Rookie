#include<iostream>

using namespace std;


int count_q(int input[]);

int main()
{
	int input[4];
	int result;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> input[j];
		}
	
		result=count_q(input);
		if (result == 0) { cout << "E" << endl; }
		else if (result == 1) { cout << "A" << endl; }
		else if (result == 2) { cout << "B" << endl; }
		else if (result == 3) { cout << "C" << endl; }

		else { cout << "D" << endl; }


	}
}

int count_q(int input[])
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (input[i] == 0)
		{
			count++;
		}
	}
	return count;
}