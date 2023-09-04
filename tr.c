#include<stdio.h>
int main(){
  int a[100][100],b[100][100],row,col,rc;
  printf("Enter the total no. of row and col. of the square matrix:");
  scanf("%d",&rc);
  printf("Enter the elements in the square matrix:\n");
  for(row=0;row<rc;row++){
  	for(col=0;col<rc;col++){
  		scanf("%d",&a[row][col]);
	  }
  }
  for(row=0;row<rc;row++){
  	for(col=0;col<rc;col++){
  		b[row][col]=a[col][row];
	}}
	printf("The transpose of the matrix is ")
		for(row=0;row<rc;row++){
  	for(col=0;col<rc;col++){
  	printf(" %d",b[row][col]);
	  }
	  printf("\n");
  }
  return 0;
}
  
