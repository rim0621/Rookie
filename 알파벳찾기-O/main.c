#include<stdio.h>
#include<string.h>

int main()
{
	char Rpa[101];

	char arpabet[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int Output[27];
	
	for (int i = 0; i < 26; i++)
	{
		Output[i] = -1;
	}
	
	gets( Rpa);
	int len = strlen(Rpa);
	for (int i = 0; i < len; i++)
	{
		for (int j =i+ 1; j < len;j++ )
		{
			if (Rpa[i] == Rpa[j])
			{
				Rpa[j] = '0';
			}
			
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
		 if (Rpa[i] == arpabet[j])
			{
				Output[j] = i;
			 }
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", Output[i]);
	}
	return 0;
}

