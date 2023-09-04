#include<stdio.h>
int main(){
  int a[3][3],b[3][3],row,col,ind=0;
  printf("Enter the elements in the 1st matrix:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&a[row][col]);
	  }
  }
  printf("Enter the elements in the 2nd matrix:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&b[row][col]);
	  }
  }
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		if(a[row][col]!=b[row][col]){
  			ind=1;
  			break;
		  }
	  }
  }
  if(ind==1)
  printf("Two matrix are not equal");
  else 
  printf("Two matrix are  equal");
  return 0;
}
