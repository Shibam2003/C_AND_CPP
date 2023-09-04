//Demo for pointer
//note: In case of array only array name is required no & sign is required
#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int *b=&a;
	//&---> (Address of ) operator
	cout<<"The address of a is"<<&a<<endl;
	cout<<"The address of a is"<<b<<endl;
	//*------> (value at)Dereference operator
	cout<<"The value of address b is "<<*b<<endl;
	int **c=&b;// Declaring a pointer to pointer 
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The address of b is "<<c<<endl;
	cout<<"The value of c is "<<*c<<endl;
	cout<<"The value of c is "<<**c<<endl;//value of pointer to  pointer
	
	return 0;
}
