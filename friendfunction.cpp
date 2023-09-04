#include<iostream>
using namespace std;
class shibam{
	int meters;
	public:
		shibam(){
			meters=0;
		}
		void display(){
			cout<<meters<<endl;
		}
		friend another(shibam &ob);
};
another(shibam &ob){
	ob.meters=ob.meters+5;
}
int main(){
	shibam ob1;
	ob1.display();
	another(ob1);
	ob1.display();
	return 0;
}
