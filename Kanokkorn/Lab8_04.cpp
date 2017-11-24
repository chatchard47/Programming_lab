#include<stdio.h>
#include<conio.h>
int main(void)
{
	FILE *fp_1,*fp_2;
	char ch,fname1[20],fname2[20];
	printf("Enter name of files to copy : "); scanf("%s",&fname1);
	printf("Enter name of files of copy : "); scanf("%s",&fname2);
	fp_1 = fopen(fname1, "r");
	fp_2 = fopen(fname2, "w");
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
