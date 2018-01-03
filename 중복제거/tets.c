#include<stdio.h>

int main()
{
	int arr[] = { 1,1,2,2,3,3,3,4,4,4,5,5,5,6,6 };
	int j = 0;
	for (int i = 0; i < 15; i++)
	{
		
		while (arr[j] == i)
		{
			j++;
		}
		printf("%d\n", arr[j]);
	}


}