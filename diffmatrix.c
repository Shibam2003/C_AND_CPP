#include<stdio.h>
int main(){
	 int a[3][3],b[3][3],c[3][3],row,col;
  printf("Enter the elements in the 1st matrix:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&a[row][col]);
	  }
	  printf("\n");
  }
  printf("Enter the elements in the 2nd matrix:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&b[row][col]);
	  }
  }
   for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		c[row][col]=a[row][col]-b[row][col];
	  }
  }
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  	printf(" %d",c[row][col]);
	  }
	  printf("\n");
  }
	return 0;
}
