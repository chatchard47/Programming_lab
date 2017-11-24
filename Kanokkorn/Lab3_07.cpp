#include<stdio.h>
#include<conio.h>
int main()
{
	char c0[12];char c1[12]; float id, sales;
	printf("Enter Name : "); scanf("%s", &c0); printf("Enter Surname : "); scanf("%s", &c1);
    printf("Enter ID : ");scanf("%f", &id); printf("Enter sales : ");scanf("%f", &sales);	
	printf("Name : %s \n", c0); printf("Surname : %s \n", c1);printf("ID : %.0f \n", id);
	if(sales>=50000){ printf("Your bonus : %.2f", (0.1*sales));}
	if(sales<50000 && sales>=30000){printf("Your bonus : %.2f", (0.05*sales));}
	if(sales<30000){printf("Your need to do %.2f for bonus", (30000-sales));}
	getch();	return 0; 
}
