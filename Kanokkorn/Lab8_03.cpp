#include<stdio.h>
#include<conio.h>
int main(void)
{
	FILE *fp_1,*fp_2;
	char ch;
	fp_1 = fopen("demo.txt", "r");
	fp_2 = fopen("backup.txt", "w");
	while (1)
		{
			ch = fgetc(fp_1);
			if(ch == EOF)
				break;
			else
				putc(ch, fp_2);
		}
	getch();
	return 0;
}
