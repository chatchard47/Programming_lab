#include<stdio.h>
#include<conio.h>

float a[4];

int main()
{
	printf("Enter Number 1: "); scanf("%f", &a[0]);
	printf("Enter Number 2: "); scanf("%f", &a[1]);
	printf("Enter Number 3: "); scanf("%f", &a[2]);
	printf("Enter Number 4: "); scanf("%f", &a[3]);
	printf("Summation is = %0.2f\n", (a[0]+a[1]+a[2]+a[3]));getch();
	printf("Average is = %0.3f", (a[0]+a[1]+a[2]+a[3])/4);getch();
	return 0;	
}
