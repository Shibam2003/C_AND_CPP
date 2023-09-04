#include<stdio.h>
int main(){
  int a[100][100],row,col,rc,ind=0;
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
  			if(a[row][col]!=1){
  				ind=1;
  				break;
			  }
		  }
		  else
		  {
		  	if(a[row][col]!=0)
		  	{
		  		ind=1;
		  		break;
			  }
		  }
		  
	  }
  }
  if(ind==1)
  printf("The matrix is not an identity matrix");
  else
   printf("The matrix is a identity matrix");
  return 0;
}
