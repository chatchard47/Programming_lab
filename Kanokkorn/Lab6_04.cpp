#include<stdio.h>
int mystery1(char *s);
int main()
{
	char string[80];
	printf("Enter a string : ");
	scanf("%s", &string);
	printf("%d\n", mystery1(string));
	return 0;
}
int mystery1(char *s)
{
	int x;
	for(x=0;*s!='\0';s++)
	{
		x++;
	}
	return x;
}
