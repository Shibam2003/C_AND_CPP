//WAP to show class and object concecpt
#include<iostream>
using namespace std;
class ABC{
	int a,b,c,s;
	public:
		void input(){
			cout<<"Enter the two nos.: ";
			cin>>a>>b;
		}
		void sum(){
			c=a+b;
		}
		void sub(){
			s=a-b;
		}
		void disp(){
			cout<<"sum: "<<c<<endl;
			cout<<"difference: "<<s;
		}
};
int main(){
	ABC ob;
	ob.input();
	ob.sum();
	ob.sub();
	ob.disp();
	return 0;
}
