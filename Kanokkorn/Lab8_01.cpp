#include<stdio.h>
#include<conio.h>
int main(void)
{
	FILE *fp;
	fp = fopen("Test.txt", "r");
	if(fp == NULL)
	{
		printf("Error \nCannot open file \n");
		getch();
		return 0;
	}
	else
		printf("Can open file \n");
	getch();
	return 0;
}
