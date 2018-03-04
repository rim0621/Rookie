#include<stdio.h>
int main() {

	int getnumber;
	int h, t, o; //100,10,1
	int count = 0,number;
	scanf_s("%d",&getnumber);
	number = getnumber;
	if (getnumber == 1000)
	{
		printf("144\n");
	}
	else if (getnumber>=100 && getnumber <= 999)
	{
		for (int i = 100; i <= number; i++)
		{
	
				getnumber =i;
				o = getnumber % 10;
				getnumber /=10;
				t = getnumber % 10;
				getnumber /= 10;
				h = getnumber;
				if ( o - t == t -h )
				{
					count++;
				}
		}
		printf("%d\n", count + 99);
	}
	else
	{
		printf("%d\n", getnumber);
	}




	return 0;
}
