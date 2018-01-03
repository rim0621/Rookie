/*
14 13 11 8 4
i=1 2 3  4 5

홀수 5/1>>>
짝수 1/4>>>

1/1

1/2
2/1

3/1
2/2
3/1

1/4
2/3
3/2
4/1

5/1
4/2
3/3
2/4 >> 14번째
1/5

1/6
2/5
3/4
4/3
5/2
6/1

7/1
6/2
5/3
4/4
3/5
2/6
7/1


*/




#include<stdio.h>

int main()
{
	int Number;
	int Fraction;//분모
	int Up;//분자
	int i = 1;
	scanf_s("%d", &Number);


	for (; i <Number ; i++)
	{
		Number -= i;
	}

	if (i % 2 == 0)//even
	{
		Up = 1;
		Fraction = i;
		for (int j = 1; j < Number; j++)
		{
			Up += 1;
			Fraction -= 1;
		}
	}
	else// odd
	{
		Up = i;
		Fraction = 1;
		for (int j = 1; j < Number; j++)
		{
			Up -= 1;
			Fraction += 1;
		}
	}


	printf("%d/%d", Up, Fraction);

	return 0;
}