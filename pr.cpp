#include<iostream>
using namespace std;
class student
{
	
	public:
		int a,b;
		student(int x,int y){
			 a=x;
			 b=y;
			
			cout<<"you call me"<<endl;
		}
		~student()
		{
			cout<<"you destroyed me"<<endl;
		}
	};
	int main()
	{
		student ob1(10,20);
		cout<<ob1.a<<endl;
		cout<<ob1.b<<endl;
		return 0;
	}
