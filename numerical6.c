//bisection method 
#include<stdio.h>
#include<math.h>
#define f(x) (sin(x)+cos(x)-1)
int main(){
	float a,b,c;
	int i=0;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	while(fabs(a-b)>0.000001){
		c=(a+b)/2;
		i++;
		if((f(a)*f(b))<0){
			b=c;
		}
		else
		a=c;
	}
	printf("Value of root is : %f\n",c);
	printf("Iteration is: %d",i);
	return 0;
}
