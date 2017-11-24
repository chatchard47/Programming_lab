#include<stdio.h>
#include<conio.h>
int main()
{
	int count = 0;
	printf("Show number from zero to ten \n");
	do
	{
		printf("%d\t", count);
		count++;
	}
	while(count<=10);
	getch();
	return 0;
}
