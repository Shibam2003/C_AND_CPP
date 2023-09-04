#include<iostream>
using namespace std;
class complex{
	int a,b;
	//creating a constructor(It has the same name of the class it is invoked automatically when object is created)
	public:
		complex(void);//constructor declaration
		void  PrintNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex::complex(void){
	a=10;
	b=0;
}
int main(){
	complex c;
	c.PrintNumber();
	return 0;
}
