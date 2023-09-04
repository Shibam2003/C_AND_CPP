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
  		if(i==j)
  		{
  			if(*(*(a+i)+j)!=1){
  				count=1;
  				break;
			  }
  			
		  }
		  else{
		  
			if(*(*(a+i)+j)!=0){
				count=1;
				break;
			}  
	}
	  }
  }
  if(count==0)
  printf("It is a identity matrix");
  else 
  printf("it is not a identity matrix");
}
