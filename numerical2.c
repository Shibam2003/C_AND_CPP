//Trapezoidal rule
#include<stdio.h>
#include<math.h>
#define f(x) (x+(1/x))
int main(){
	int n=100,i;
	float a,b,x,y,h,sum=0;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	h=(b-a)/n;
	for(i=0;i<=n;i++){
		x=a+(i*h);
		y=f(x);
		if(i==0||i==n){
			sum= sum+(h*y)/2;
		}
		else
		sum=sum+(h*y);
	}
	printf("The integration is %f",sum);
	return 0;
}
