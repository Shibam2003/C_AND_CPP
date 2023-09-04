#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void input(){
			cout<<"Enter "<<endl;
			cin>>a;
		}
		friend void evenodd(A ob2);
};
void evenodd(A ob2){
	if(ob2.a%2==0){
		cout<<"Even";
	}
	else
	{
		cout<<"odd";
	}
	
}
int main(){
	A ob1;
	ob1.input();
	evenodd(ob1);
}
