#include<iostream>
using namespace std;
struct employee{
	//data
	int eid;
	char favchar;
	double salary;
};
int main(){
	struct employee shibam;
	shibam.eid=1;
	shibam.salary=122727627272;
	shibam.favchar='c';
	cout<<"The value is "<<shibam.eid<<endl;
	cout<<"The value is "<<shibam.salary<<endl;
	cout<<"The value is "<<shibam.favchar<<endl;
	return 0;
}
