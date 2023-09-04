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
  			if(*(*(a+i)+j)!=0){
  				count=1;
  				break;
			  }
		  }
	
	  }
	  if(count==1)
	  break;
  }
  if(count==0)
  printf("It is  a upper triangular matrix");
  else 
  printf("It is not a upper triangular matrix");
}
