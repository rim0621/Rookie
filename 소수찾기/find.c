#include<stdio.h>

int main()
{
	int GetNumber=0;
	int count = 0;
	scanf_s("%d", &GetNumber);
	int *arr = (int*)malloc(sizeof(int)*GetNumber);
	for (int i = 0;i< GetNumber; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < GetNumber; i++)
	{
		if (arr[i] == 2 || arr[i] == 3 || arr[i] == 5 || arr[i] == 7)
		{
			count++;
		}
		else if (arr[i] == 0|| arr[i] ==1|| arr[i] % 2 == 0 || arr[i] % 3==0 || arr[i] % 5 == 0 || arr[i] % 7==0)
		{
			count = count;
		}
		else
		{
			count++;
		}
	}
	printf("%d", count);
	free(arr);
	return 0;
}