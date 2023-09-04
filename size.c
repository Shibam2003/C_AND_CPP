//Dynamic memory allocation 
//WAP to display the memory size occupied by all the fundamental datatypes
#include<stdio.h>
struct student{
	int roll; 
	float marks;
	int a[5];
};
union toy{
	int a;
	float b;
	double c;
};
int main(){
	struct student s1;
	union toy s2;
	printf("for int: %d",sizeof(int));
	printf("\nfor float: %d",sizeof(float));
	printf("\nfor char: %d",sizeof(char));
	printf("\nfor double: %d",sizeof(double));
	printf("\nfor structure: %d",sizeof(struct student));
	printf("\nfor union: %d",sizeof(union toy));
	
	return 0;
}
