#include<stdio.h>
int main(){
  int a[3][3],row,col,i=1,sum=0;
  printf("Enter the elements in the 2d array:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&a[row][col]);
	  }
  }
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		sum=sum+a[row][col];
  	
	  }
	printf("sum of %d row is %d\n",i,sum);
	  sum=0;
	  i++;
  }
  return 0;
}
