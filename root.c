#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,r1,r2;
	printf("Enter the value of a,b and c:");
	scanf("%f %f %f",&a,&b,&c);
	x=(b*b)-(4*a*c);
	if(x>0)
	{
		r1=(-b+sqrt(x))/(2*a);
		r2=(-b-sqrt(x))/(2*a);
		printf("The real roots=%.2f %.2f",r1,r2);
		
	}
	else
	if(x==0)
	{
		r1=r2=-b/(2*a);
		printf("Roots are equal= %.2f",r1);
	}
	else
	printf("roots are imaginary");
	return 0;
}
