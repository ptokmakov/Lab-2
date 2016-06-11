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
	
	return 0;
}
