#include<iostream>
using namespace std;
inline void add(int x, int y){
	int z;
	z=x+y;
	cout<<"sum is: "<<z;
	
}
int main(){
	int a,b;
	cout<<"Enter the values:";
	cin>>a>>b;
	add(a,b);//here the entitre inline function code  will be repalced 
	return 0;
}

