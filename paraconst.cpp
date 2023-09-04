#include<iostream>
using namespace std;
class complex{
	int a,b;
	//creating a constructor(It has the same name of the class it is invoked automatically when object is created)
	public:
		complex(int x,int y);//constructor declaration
		void  PrintNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex::complex(int x,int y){
	a=x;
	b=y;
}
int main(){
	complex a(4,6);
	complex b=complex(5,7);
	a.PrintNumber();
	b.PrintNumber();
	return 0;
}
