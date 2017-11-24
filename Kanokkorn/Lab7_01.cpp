#include<stdio.h>
int main()
{
	char letter = 'D';
	int num = 19;
	float point = 26.09;
	char *pt_letter,**pt2_ch;
	int *pt_num,**pt2_num;
	float *pt_point,**pt2_flt;
	pt_letter = &letter;
	pt_num = &num;
	pt_point = &point;
	pt2_ch = &pt_letter;
	pt2_num = &pt_num;
	pt2_flt = &pt_point;
	printf("Address of the letter = %x \n", pt_letter);
	printf("Address of num = %x \n", pt_num);
	printf("Address of point = %x \n", pt_point);
	printf("Address of the pt_letter = %x \n", pt2_ch);
	printf("Address of pt_num = %x \n", pt2_num);
	printf("Address of pt_point = %x \n", pt2_flt);
	return 0;
}
