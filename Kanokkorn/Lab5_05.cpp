#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3] = { 1, 0, -1, 
					-1, 2, 3,
					2, 4, 5 
	};
	int r, c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%5d ", a[r][c]);
		}
		printf("\n");
	}
		for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			if(r==c)
			{
				
			}
			else
			{
				a[r][c]=0;
			}
		}
		printf("\n");
	}
	printf("\n*** Diagonal Matrix is ***\n");
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
