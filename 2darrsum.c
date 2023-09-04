#include<stdio.h>
int main(){
  int a[3][3],row,col,sum=0;
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
  }
  printf("Sum of the elements is %d",sum);
  return 0;
}
