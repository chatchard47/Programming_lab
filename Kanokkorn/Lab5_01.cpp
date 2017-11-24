#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter numbers [%d][%d] : ", r, c);
			scanf("%d",&a[r][c]);
		}
	}
	printf("\n*** Matrix ***\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%5d ", a[r][c]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
