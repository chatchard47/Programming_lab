#include<stdio.h>
int findmax(int i[3]);
int main()
{	int i[3];
	printf("Enter number 1 :");scanf("%d",&i[0]);
	printf("Enter number 2 :");scanf("%d",&i[1]);
	printf("Enter number 3 :");scanf("%d",&i[2]);
	printf("Maximun is : %d", findmax(i));
}
int findmax(int i[])
{
	int max = i[0];
	if(max<i[1]){max = i[1];}
	if(max<i[2]){max = i[2];}
	return max;
}
