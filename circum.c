#include<stdio.h>
int main()
{
	int l,b,r,area,per;
	float circum,area2;
	printf("\n Enter the length and breadth of the rectangle:");
	scanf("%d %d",&l,&b);
	printf("\n Enter the radius of the circle:");
	scanf("%d",&r);
	area=l*b;
	printf("\n Area of the rectangle is %d",area);
	per=2*(l*b);
	printf("\n perimeter of the rectangle is %d",per);
	circum=2*3.14*r;
	printf("\n circumference of the circle is %.2f",circum);
	area2=3.14*(r*r);
	printf("\n Area of the circle is %.2f",area2);
	return 0; 
}
