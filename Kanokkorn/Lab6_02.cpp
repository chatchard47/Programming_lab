#include<stdio.h>
#include<conio.h>
#include<math.h>
int area;
int side;
int sqr(int side);
int printArea(int side, int area);

int main ()
{
	printf("Please enter side of square : ");
	scanf("%d", &side);
	area = sqr(side);
	printArea(side,area);
	getch();	
}
int sqr(int side)
{
	area = side * side;
	return(area);
}
int printArea(int side,int area)
{
	printf("Square area of %d * %d is %d\n", side, side, area);
}
