#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14

float deg_rad(float num);
int main(){
	float deg,rad;
	printf("Enter Degree : ");
	scanf("%f", &deg);
	rad = deg_rad(deg);
	//printf("%f -> %f \n", deg,rad);
	printf("sin(%.2f) = %.3f\n",deg,sin(rad));
	printf("cos(%.2f) = %.3f\n",deg,cos(rad));
	printf("tan(%.2f) = %.3f\n",deg,tan(rad));
	return 0;
		}
float deg_rad(float num){
	float ans;
	ans  = num * pi / 180;
	return (ans);
	}
	
