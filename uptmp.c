#include<stdio.h>
void main(){
	int a[3][3],i,j,count=0;
	printf("Enter the elements in the 2d array:\n");
	for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		scanf("%d",*(a+i)+j);
	  }
  }
  for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		if(j<i){
  			*(*(a+i)+j)=0;
		  }
	
	  }
	
  }
  printf("The upper triangular matrix is \n");
   for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		printf("%d ",*(*(a+i)+j));
	  }
	  printf("\n");
  }
}
