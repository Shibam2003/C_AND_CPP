//2d array
#include<stdio.h>
int main(){
  int a[3][3],row,col;
  printf("Enter the elements in the 2d array:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&a[row][col]);
	  }
  }
  printf("Matrix you have entered is ->\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		printf(" %d",a[row][col]);
	  }
	  printf("\n");
  }
  return 0;                                	
}
