#include<stdio.h>
float x=3.141;
void main(){
	void fun1(int);
	void fun2(int);
	int r;
	printf("Enter the radius of the circle:\n");
	scanf("%d",&r);
	fun1(r);
	fun2(r);
}
void fun1(int y){
	float area;
	area=x*y*y;
	printf("Area of the circle is %2f\n",area);
}
void fun2(int y){
	float par;
	par=2*x*y;
	printf("perimiter of the circle is %2f\n",par);
}
