
#include<stdio.h>

int Count(char *s);
int main() {
	int count;
	char s[1000001];

	gets(s);//스캔f는 띄어쓰기를 못구별하므로 gets로

	count = Count(s);

	printf("%d", count);
	return 0;
}
int Count(char *s)
{
	int a = 0;
	for (int i = 0; i < 1000000; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == NULL))
		{
			if (s[i] == NULL)
			{
				return a;
			}
			else

				a++;
		}

	}
	return a;
}