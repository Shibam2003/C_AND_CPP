#include<iostream>
using namespace std;
class student
{
	
	public:
		int side,t;
		student(int x,int y){
			t=y;
			side=x;
		
		}
			~student()
		{
			cout<<"you destroyed me"<<endl;
		}
	};
	int main(){
		student ob(20,40);
		cout<<ob.side<<"\t"<<ob.t<<endl;
		student ob2=ob;
		return 0;
	}
