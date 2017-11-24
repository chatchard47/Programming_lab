#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],c;
	for(c=0;c<20;c++)
	{
		printf("Enter age [%d] : ", c);
		scanf("%d", &a[c]);
	}
	printf("Finish\n");
	getch();
	return 0;
}
