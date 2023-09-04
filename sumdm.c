#include<stdio.h>
int main(){
  int a[100][100],row,col,rc,sum1=0,sum2=0;
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
  		if(row==col)
  		{
  			sum1=sum1+a[row][col];
		  }
		  else{
		  	sum2=sum2+a[row][col];
		  }
	}}
	printf("sum of the diagonal elements in the matrix is %d\n",sum1);
	printf("sum of the non diagonal elements in the matrix is %d",sum2);
  return 0;
}
