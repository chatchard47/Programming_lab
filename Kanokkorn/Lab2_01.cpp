#include<stdio.h>
#include<conio.h>

int a[2];

int main()
{
	printf("Enter Number a:"); scanf("%d", &a[0]);
	printf("Enter Number b:"); scanf("%d", &a[1]);
	printf("%d + %d = %d", a[0], a[1], a[0]+a[1]);
	return 0;	
}
