#include<iostream>
using namespace std;
class ABC{
	int a,b,c;
	public:
void add(){
	int x,y;
	cout<<"Enter :"<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"c= "<<c<<endl;
}
void add(int x , int y){
	a=x;
	b=y;
	c=a+b;
	cout<<"c= "<<c;
}
};
int main(){
	ABC ob1;
	ob1.add(20,30);
	ob1.add();
	return 0;
}
