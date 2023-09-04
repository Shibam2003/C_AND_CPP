#include<iostream>
using namespace std;
void swap(int arr[], int size){
	int start = 0; 
	int end = size-1; 
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++; 
		end--;
	}
	cout<<"After swapping the array is \n";
	for(int i = 0; i < size ; i++){
		cout<<arr[i];
		cout<<"\n";
	}
}
int main(){
	int arr[5];
	cout<<"Enter the elements one by one:\n ";
	for(int i = 0; i<5 ; i++){
		cin>>arr[i];
	}
	cout<<"Before swapping the array is:\n";
	for(int i = 0; i < 5 ; i++){
		cout<<arr[i];
		cout<<"\n";
	}
	//swapping 
	swap(arr,5);
	return 0;
	
}
