//WAP to display use of constructor and destructor
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){
		x=10;
		y=20;
	}
	void disp(){
		cout<<"x="<<x<<" "<<"y="<<y<<endl;
	}
	~A(){
		cout<<"Destructor called"<<endl;
	}
};
int main(){
	A ob1,ob2,ob3;
	ob1.disp();
	ob2.disp();
	ob3.disp();
	return 0;
}
