#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a = -5 , b = 10;
	printf("Before Swapping\n");
	printf("The value of a is %d, and the value of b is %d\n", a, b);
	swap(&a, &b);
	printf("After swapping\n");
	printf("The value of a is %d, and the value of b is %d\n", a, b);
	return 0;
}
int swap(int *aptr, int *bptr)
{
	int temp;
	temp = *bptr;
	*bptr = *aptr;
	*aptr = temp;
}
