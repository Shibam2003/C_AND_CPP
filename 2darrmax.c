#include<stdio.h>
int main(){
  int a[3][3],row,col,max,min;
  printf("Enter the elements in the 2d array:\n");
  for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		scanf("%d",&a[row][col]);
	  }
  }
  max=a[0][0];
  min=a[0][0];
   for(row=0;row<3;row++){
  	for(col=0;col<3;col++){
  		if(a[row][col]>max){
  			max=a[row][col];
		  }
		  if(a[row][col]<min){
  			min=a[row][col];
		  }
	  }
  }
   
  
  printf("Max of the list is %d\n",max);
  printf("Min of the list is %d",min);
  
  
  return 0;
}
