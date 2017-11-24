#include<stdio.h>
#include<conio.h>
int main()
{
	float i[4]; char key;
	printf("Press A for calculate area square\n"); 
	printf("Press B for calculate area triangle\n"); 
	printf("Press Key :");scanf("%c", &key);
	if (key == 'A')
	{
		printf("calculate area square\n");
		printf("Width value :"); scanf("%f", &i[0]);
		printf("Length value :"); scanf("%f", &i[1]);
		printf("\nArea of Square = %f", i[0]*i[1]);
	}
	if (key == 'B')
	{
		printf("calculate area triangle\n");
		printf("Base value :"); scanf("%f", &i[0]);
		printf("Height value :"); scanf("%f", &i[1]);
		printf("\nArea of Triangle = %.2f", (i[0]*i[1])/2 );
	}
	getch(); return 0;
}
