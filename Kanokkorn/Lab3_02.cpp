#include<stdio.h>
#include<conio.h>
int main()
{
	int i[2];
	printf("Input number 1 = "); scanf("%d", &i[0]);
	printf("Input number 2 = "); scanf("%d", &i[1]);
	if ((i[0]+i[1])>10)
	{
		printf("number 1 = %d \n", i[0]);
		printf("number 2 = %d \n", i[1]);
		printf("Result = %d \n", i[0]+i[1]);
	}
	printf("Good bye"); getch();
	return 0;
}
