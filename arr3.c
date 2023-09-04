#include<stdio.h>
void main(){
  int a[10],n,i,bulb=0;
  printf("Enter the elements:");
  for(i=0;i<10;i++){
  	scanf("%d",&a[i]);                              	
}
printf("Enter the no. to be searched:");
scanf("%d",&n);
for(i=0;i<10;i++){
	if(a[i]==n)
	{
		bulb=1;
		break;
	}
}
if(bulb==0){
	printf("no. is not on the list");
}
else{
	printf("Number in the list and position is %d",i+1);
}
  }
  
