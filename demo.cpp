#include<iostream>
using namespace std;
class student
{
	int roll,marks;
	string name;
	public:
		student(){
			roll=10;
		}
		void input()
		{
			cout<<"Enter the name,roll and marks:";
			cin>>name>>roll>>marks;
		}
		void display(){
			cout<<name<<"\t"<<roll<<"\t"<<marks<<endl;
		}
};
int main(){
	student ob[5];
	for(int i=0;i<5;i++)
	{
		ob[i].input();
	}
	cout<<"-------------now it is display time-------- "<<endl;
	for(int i=0;i<5;i++)
	{
		ob[i].display();
	}
	return 0;
}
