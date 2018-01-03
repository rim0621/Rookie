/*접근>>> 6개12개 24개... 48개 씩 늘어남으로 1빼고 6빼고 12 빼고...(음수나오면 끝) 하면 
첫라인 둘라인 샛쨰라인.... 으로 나옴*/


#include<stdio.h>

int main()
{
	int RoomNumber;
	int location=0,s=1;
	
	scanf_s("%d", &RoomNumber);

	for (int i = 1; 0 <RoomNumber;i++)
	{
		RoomNumber =RoomNumber-s;
		s = i * 6;
		location++;
		
		
	}
	
	printf("%d", location);

	return 0;
}
