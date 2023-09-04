//Program to display structure usng c++
#include<iostream>
using namespace std;
struct student{
	int roll;
	float marks;
	char name[100];
	void input(){
		cout<<"enter the roll no.: ";
		cin>>roll;
		cout<<"Enter the marks: ";
		cin>>marks;
		cout<<"Enter the name: ";
		cin>>name;
	}
	void display(){
		cout<<"roll no. : "<<roll<<endl;
		cout<<"Marks: "<<marks<<endl;
		cout<<"Name: "<<name<<endl;
	}
};
int main(){
	student s;//Declaring a structure variable
	s.input();
	s.display();
	cout<<"The roll no. of the student is : "<<s.roll;
	return 0;
}
