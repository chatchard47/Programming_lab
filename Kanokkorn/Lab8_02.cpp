#include<stdio.h>
#include<conio.h>
int main(void)
{	
	struct
	{
		char name[20] = "Kanokkorn", last_name[20] = "Kornkankit";
		char id[20] = "60511001"; 
	} info;
	FILE *fp;
	fp = fopen("demo.txt", "w");
	fputs(info.name,fp);fputs("\n",fp);fputs(info.last_name,fp);fputs("\n",fp);fputs(info.id ,fp);
	getch();
	return 0; 
}
