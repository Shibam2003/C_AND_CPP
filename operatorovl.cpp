#include<iostream>
using namespace std;
class sun{
	int real,imag;
	public:
		void read(){
			cout<<"\nEnter the real and imag part:";
			cin>>real>>imag;
			
		}
		void disp(){
			cout<<real<<"+i"<<imag;
		}
		friend sun operator +(sun ob1, sun ob2);
};
sun operator +(sun ob1, sun ob2){
	sun temp;
	temp.real=ob1.real+ob2.real;
	temp.imag=ob1.imag+ob2.imag;
	return temp;
	
}
int main(){
	sun ob1,ob2,ob3;
	cout<<"Enter the value of 1st compx no:";
	ob1.read();
	cout<<"Enter the value of 2nd compx no:";
	ob2.read();
	ob3=ob1+ob2;//calling the operator function
	cout<<"The result is\n";
	ob3.disp();
	return 0;
}
