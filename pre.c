//Example of macro substitution
#include<stdio.h>
#define pie 3.1 //This is a preprocessor command
#define start {
#define end }
int main()
start
	void perimeter(int r);
	void area(int r);
	int r;
	printf("Enter the radius of the circle:");
	scanf("%d",&r);
	perimeter(r);
	area(r);
	return 0;
end
void perimeter(int r){
	float x;
	x=2*pie*r;
	printf("\nPerimeter of the circle is %.4f",x);
	
}
void area(int r){
	float x;
	x=pie*r*r;
	printf("\nArea of the circle is %.4f",x);
}
