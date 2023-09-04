#include<stdio.h>
void main(){
	int x,y,,i;
	float ans=1;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	for(;i<=y;i++){
		ans=ans*x;
	}
	printf("answer is %d",ans);
}
