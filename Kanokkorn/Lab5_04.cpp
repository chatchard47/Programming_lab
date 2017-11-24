#include<stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
	int i[SIZE],tmp,b;
	for (b=0;b<SIZE;b++)
	{
		printf("Enter i[%d] : ", b+1);
		scanf("%d", &i[b]);
	}
	for(b=0;b<SIZE-1;b++)
	{
			if(i[b] > i[b+1])
			{
				tmp = i[b+1];
				i[b+1] = i[b];
				i[b] = tmp;
			}
	}
	printf("The maximum number = %d", i[SIZE-1]);
	getch();
	return 0;
}
