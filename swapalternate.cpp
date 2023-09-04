#include<iostream>
using namespace std;
void swap(int arr[], int size){
	for(int i = 0; i<size; i=i+2){
		if(i+1<size){
			swap(arr[i+1],arr[i]);//using in built swap function
		}
	}
	for(int i = 0; i < size; i++){
		cout<<arr[i];
		cout<<"\n";
	}
	
}
int main(){
	int arr[5];
	cout<<"Enter the array elements one by one:\n";
	for(int i = 0; i < 5; i++){
		cin>>arr[i];
	}
	cout<<"before swapping the array is:\n";
	for(int i = 0; i < 5; i++){
		cout<<arr[i];
		cout<<"\n";
	}
	cout<<"After swapping the array is:\n";
	swap(arr, 5);
	
	return 0;
}
