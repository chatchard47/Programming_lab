#include<stdio.h>
#include<conio.h>
int main(void)
{
	FILE *fp;
	struct people
	{
		char name[20];
		char surname[20];
		int day;
		char month[20];
		int year;
	}pe;
	fp = fopen("data.txt", "w");
	if(fp == NULL)
	{
		printf("Error \nCannot open file\n");
		getch();
		return 0;
	}
	else
	{
		printf("Can open file\nPlease Enter to Continue...");
	}
	getch();
	printf("\nEnter your name : ");
	scanf("%s",&pe.name);
	printf("\nEnter your surname : ");
	scanf("%s",&pe.surname);
	printf("\nDay : ");
	scanf("%d",&pe.day);
	printf("\nMonth : ");
	scanf("%s",&pe.month);
	printf("\nYear : ");
	scanf("%d",&pe.year);
	fprintf(fp,"%s %s ",pe.name,pe.surname);
	fprintf(fp,"%d %s %d\n",pe.day,pe.month,pe.year);
	if(!fclose(fp))
	{
		printf("\nClose file\n");
	}
	getch();
	return 0;
}
