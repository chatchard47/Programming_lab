#include<stdio.h>
#include<conio.h>
int main()
{
	char msg[100];
	int ctr = 0, c = 0 ;
	printf("******************************\n");
	printf("* Program for count SENTENCE *\n");
	printf("******************************\n");
	printf("[One of the sentence must have '.' or '?']\n");
	printf("Enter Message : ");
	gets(msg);
	while(msg[c]!='\0')
	{
		if(msg[c]=='.'||msg[c]=='?')
		{
			ctr++;	
		}
		c++;
	}
	printf("\n Your message has %d sentence(s). \n", ctr);	
	getch();
	return 0;
}
