#include<stdio.h>

int main()
{
	int GetNumber, temp;
	scanf_s("%d", &GetNumber);
	int *input = (int*)malloc(sizeof(int) * GetNumber);
	for (int i = 0; i < GetNumber; i++)
	{
		scanf_s("%d", &input[i]);
	}
	
	for (int i = 0; i < GetNumber; i++)
	{
		
		for (int j = 0; j < GetNumber; j++)
		{
			if (input[i] < input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			
			}
		}
	}
	for (int i = 0; i < GetNumber; i++)
	{
		printf("%d\n", input[i]);
	}
	free(input);
	return 0;
}