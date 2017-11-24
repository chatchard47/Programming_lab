#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j;
	printf("Enter Number : ");
	scanf("%d",&i);
	printf("Show number %d \n", i);
	for(j=0;j<=i;j++)
	{
		printf("%d\t", j);
	}
	printf("\nPress Enter to end program");
	getch();
	return 0;
}
