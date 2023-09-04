#include<iostream>
using namespace std;
class fib
{
	int n,a=0,b=1;
	public:
		void input();
		void cal();
};
void fib::input()
{
	cout<<"Enter the range:";
	cin>>n;
}
void fib::cal()
{
	int c=0;
	cout<<a<<" "<<b;
	for(int i=3;i<=n;i++)
	{
		c=a+b;
	
	a=b;
	b=c;
	cout<<" "<<c;
}
}
int main()
{
	fib ob;
	ob.input();
	ob.cal();
	return 0;
}
