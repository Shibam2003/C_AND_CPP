#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,m,l;
	int *p;
	printf("\nEnter the total no. of elements to be inserted:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)//checking if there is any problem with the memory allocation
	{
	
	printf("\nMemory not allocated properly");
	exit(0);
}
else{
	printf("\nEnter the elements one by one : ");
	for(i=0;i<n;i++)//accepting the values in the dynamic allocated space
	{
		scanf("%d",(p+i));
	}
	m=*(p+0);
	l=*(p+0);
	for(i=0;i<n;i++){
		if(m<*(p+i)){
			m=*(p+i);
		
		}
		if(l>*(p+i)){
			l=*(p+i);
		
		}
	}
	
	printf("\nMaximum is %d",m);
	printf("\nminimum is %d",l);
}
	free(p);
	return 0;
}
