#include<iostream>
using namespace std;
class complex;
class cal{
	public:
		int add(int a,int b){
		return(a+b);
	}
	int sumrc(complex ,complex );
};
class complex{
	int  a,b;
	friend class cal;
	public:
		void steNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		
		void  PrintNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
int cal::sumrc(complex o1,complex o2){
	return(o1.b+o2.b);
}
int main(){
	complex o1,o2;
	o1.steNumber(1,4);
	o2.steNumber(5,7);
	cal calc;
	int res=calc.sumrc(o1,o2);
	cout<<"The sum of complex part of 01 and 02 is "<<res<<endl;
	return 0;
}
