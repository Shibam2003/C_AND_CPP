#include<iostream>
using namespace std;
class dis{
		public:
	int feet;
	float inch;

		void input(){
			cin>>inch;
			cin>>feet;
		}
};
int main()
{
	int n,i,fsum,x;
	float inch=0,feet=0,remain,isum;
	cout<<"How many distance you want to enter:";
	cin>>n;
	dis k[n];
	for(i=0;i<n;i++)
	{
		k[i].input();
	}
	for(i=0;i<n;i++)
	{
		inch=inch+k[i].inch;
		feet=feet+k[i].feet;
	}
	remain=inch/12;
	fsum=feet+remain;
	x=(int)inch;
	isum=x%12;
	cout<<fsum<<endl;
	cout<<isum;
	return 0;
	
}
