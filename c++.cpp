#include<iostream>
using namespace std;
class complex{
	int  a,b;
	public:
		void steNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		friend complex sumcomplex(complex o1,complex o2);
		void  PrintNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex sumcomplex(complex o1,complex o2){
	complex o3;
	o3.steNumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
	complex c1,c2,sum;
	c1.steNumber(1,2);
	c2.steNumber(3,4);
	c1.PrintNumber();
	c2.PrintNumber();
	sum=sumcomplex(c1,c2);
	sum.PrintNumber();
	return 0;
}
