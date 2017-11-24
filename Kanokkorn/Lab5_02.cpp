#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][4] = { 1, 2, 3, 4,
					2, 3, 4, 5,
					3, 4, 5, 6
	};
	int r,c,row[3]={0, 0, 0}, column[4] = {0, 0, 0, 0};
	printf("\n *** Display Matrix *** \n\n");
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			printf("%5d ",a[r][c]);
		}
		printf("\n");
	}
	printf("\n*** Display Summation ***\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			row[r] = row[r] + a[r][c];
			column[c] = column[c] + a[r][c];
		}
		
	}
	printf("\n");
		for(r=0;r<3;r++)
		{
			printf("sum of row [%d] = %d\n", r,row[r]);	
		}
		for(c=0;c<4;c++)
				{
					printf("sum of column [%d] = %d\n", c,column[c]);
				}
	getch();
	return 0;
}
