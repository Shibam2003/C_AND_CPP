#include<stdio.h>
#include<math.h>
#define f(x) (1/1+pow(x,2))
int main(){
	int n=50,i;
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
			sum= sum+((3*h)/10)*y;
		}
		else if(i%2==0 && i%3!=0)
		sum=sum+((3*h)/10)*y;
		else if(i%2!=0 && i%3!=0)
		sum=sum+5*3*y*(h/10);
		else if(i%2!=0 && i%3==0)
		sum=sum+6*3*y*(h/10);
		else
		sum= sum+((3*h)/10)*y;
	}
	printf("The integration is %f",sum);
	return 0;
}
