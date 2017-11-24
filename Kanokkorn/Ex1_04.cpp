#include <stdio.h>
#include <conio.h>

int main(void)
	{	
		float a = 5.0;
		float b = 7.4;
		float c =0 ;
		c = a+b;
		printf("%.1f + %1f\n",a ,b);
		printf("result \t=\t %2f \n", c);
		printf("result \t=\t %e", c);
		getch();
		return(0);
	}
