#include<stdio.h>
int main(void)
{
	int v[5] = {10, 20, 30, 40, 50};
	int *v1Ptr, *v2Ptr;
	v1Ptr = &v[1];
	v2Ptr = &v[2];
	printf("The address of v1Ptr in HEX is %x and in %u\n", v1Ptr, v1Ptr);
	printf("The address of v2Ptr in HEX is %x and in %u\n", v2Ptr, v2Ptr);
	printf("The result of v2Ptr - v1Ptr is %d \n", v2Ptr-v1Ptr);
	printf("Size of integer is %d \n", sizeof(int));
	return 0;
}
