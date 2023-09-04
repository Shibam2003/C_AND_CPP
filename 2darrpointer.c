//2D arrray using pointer 
#include<stdio.h>
void main(){
	int a[3][3],i,j;
	printf("Enter the elements in the 2d array:\n");
	for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		scanf("%d",*(a+i)+j);
	  }
  }
  printf("The entered values in the array is:\n");
  for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		printf("%d ",*(*(a+i)+j));
	  }
	  printf("\n");
  }
}
