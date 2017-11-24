#include<stdio.h>
#include<conio.h>

float a[2];

int main()
{
	printf("Enter Number a: "); scanf("%f", &a[0]);
	printf("Enter Number b: "); scanf("%f", &a[1]);
	printf("%.0f + %.0f = %.0f\n", a[0], a[1], a[0]+a[1]);getch();
	printf("%.0f - %.0f = %.0f\n", a[0], a[1], a[0]-a[1]);getch();
	printf("%.0f * %.0f = %.0f\n", a[0], a[1], a[0]*a[1]);getch();
	printf("%.0f / %.0f = %.2f\n", a[0], a[1], a[0]/a[1]);getch();
	printf("Average is = %0.2f", (a[0]+a[1])/2);getch();
	return 0;	
}
