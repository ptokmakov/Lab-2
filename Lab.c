#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,D;
	float x1,x2,x;
	
	printf ("Input A,B,C: \n");	
	printf("A=");
	scanf("%f", &a);
	printf("B=");
	scanf("%f", &b);
	printf("C=");
	scanf("%f", &c);
	
	D=b*b-4*a*c;
	printf("D=%.3f \n", D);
	
	if(D>0)
	{
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("x1=%.3f \n", x1);
		printf("x2=%.3f \n", x2);
	}
	
	return 0;
}
