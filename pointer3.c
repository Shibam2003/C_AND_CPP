#include<stdio.h>
void main(){
	int a;
	a=10;
	int *p;
	int **p1;
	p=&a;
	p1=&p;
	//value of  a from a 
	printf("%d\n",a);
	printf("%d\n",*(&a));
	
	//address of a from a 
	printf("%u\n",&a);
	
	//value of a from p
	printf("%d\n",*p);
	printf("%d\n",**(&p));
	
	//address of a from p 
	printf("%u\n",p);
	printf("%u\n",*(&p));
	
	//value of a from p1
	printf("%d\n",**p1);
	printf("%d\n",***(&p1));
	
	//address of a from p1
	printf("%u\n",*(p1));
	printf("%u\n",**(&p1));
	
}
