#include<iostream>
using namespace std;
class perfect
{
	int n,g;
	public:
	void input();
	void calculation();
	void display();
};
void perfect::input(){
	cout<<"Enter the no:";
	cin>>n;
}
void perfect::calculation(){
	int r,f=0,g=0,a=n;
			while(a>0)
			{
			r=a%10;
			for(int i=1;i<=r;i++)
			{
			f=f*i;	
			}
			g=f+g;
			a=a/10;

}}
void perfect::display(){
		if(g==n){
				cout<<"The number is perfect";
			}
				else
				cout<<"The number is not perfect";
	
}
int main()
{
	perfect ob;
	ob.input();
	ob.calculation();
	ob.display();
	return 0;
}
