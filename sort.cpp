#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[20],f,k;
	cout<<"Enter the no. of elements you want to enter:";
	cin>>n;
	cout<<"Enter the elements one by one:\n";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
}
for(i=0;i<=n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
		
		cout<<a[k]<<" ";
	}
	cout<<endl;
		if(a[j]<a[i])
		{
		
		f=a[j];
		a[j]=a[i];
		a[i]=f;
	}
}
}
	for(k=0;k<n;k++)
		{
		
		cout<<a[k]<<" ";
	}

		return 0;
	
}
