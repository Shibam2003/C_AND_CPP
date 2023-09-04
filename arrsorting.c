//sorting of array elements
#include<stdio.h>
void main(){
  int a[100],n,f,i,j;
  printf("Enter how many nos. you want to enter:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);                              	
}
for(i=0;i<=n-1;i++)
{
	for(j=i+1;j<n;j++){
		if(a[j]<a[i])
		{
			f=a[j];
			a[j]=a[i];
			a[i]=f;
		}
	}
}
for(i=0;i<n;i++){
	printf(" %d",a[i]);
}
  }
  
