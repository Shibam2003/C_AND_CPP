//call by ref in c++
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	void swap(int &x,int &y);
	cout<<"Enter the value of a and b:"<<endl;
	cin>>a>>b;
	cout<<"The value of and b before function call is:"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"The value of and b after function call is:"<<a<<" "<<b<<endl;
	return 0;
}
void swap(int &x,int &y)//Here x and y become alias to a and b
{
	int z;
	z=x;
	x=y;
	y=z;
	
}
