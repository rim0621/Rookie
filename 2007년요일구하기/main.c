#include<stdio.h>

int main()
{
	int x, y,day;

	scanf_s("%d %d", &x, &y);


	 if (x == 2)
	{
		y = y + 31;
	}
	else if (x == 3)
	{
		y = y + 59;
	}
	else if (x == 4)
	{
		y = y + 90;
	}
	else if (x == 5)
	{
		y = y + 120;
	}
	else if (x == 6)
	{
		y = y + 151;
	}
	else if (x == 7)
	{
		y = y + 181;
	}
	else if (x == 8)
	{
		y = y + 212;
	}
	else if (x == 9)
	{
		y = y + 243;
	}
	else if (x == 10)
	{
		y = y + 273;
	}
	else if (x == 11)
	{
		y = y + 304;
	}
	else if (x == 12)
	{
		y = y + 334;
	}
	for (int i = 0; i < 60; i++)
	{
		day = y % 7;
		
	}
	if (day == 1)
	{
		printf("MON");
	}
	else if (day == 2)
	{
		printf("TUE");
	}
	else if (day == 3)
	{
		printf("WED");
	}
	else if (day == 4)
	{
		printf("THU");
	}
	else if (day == 5)
	{
		printf("FRI");
	}
	else if (day == 6)
	{
		printf("SAT");
	}
	else if (day == 0)
	{
		printf("SUN");
	}
	return 0;
}