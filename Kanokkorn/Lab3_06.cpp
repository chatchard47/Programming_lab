#include<stdio.h>
#include<conio.h>
int main()
{
	float i[4]; char key;
	printf("Press A for calculate area square\n"); 
	printf("Press B for calculate area triangle\n");
	printf("Press C for calculate area circle\n"); 
	printf("Press D for calculate circular\n");
	printf("Press Key :");scanf("%c", &key);
	switch(key){
	case'A':
	{
		printf("calculate area square\n");
		printf("Width value :"); scanf("%f", &i[0]);
		printf("Length value :"); scanf("%f", &i[1]);
		printf("\nArea of Square = %f", i[0]*i[1]);
		break;
	}
	case'B':
	{
		printf("calculate area triangle\n");
		printf("Base value :"); scanf("%f", &i[0]);
		printf("Height value :"); scanf("%f", &i[1]);
		printf("\nArea of Triangle = %.2f", (i[0]*i[1])/2 );
		break;
	}
	case'C':
	{
		printf("calculate area circle\n");
		printf("radius :"); scanf("%f", &i[0]);
		printf("\nArea of circle = %.2f", (22/7)*(i[0]*i[0]) );
		break;
	}
	case'D':
	{
		printf("calculate circular\n");
		printf("radius :"); scanf("%f", &i[0]);
		printf("\nCircular = %.2f", 2*(22/7)*i[0] );
		break;
	}
	default:
			printf("Error!!!");
	}
	getch(); return 0;
}
