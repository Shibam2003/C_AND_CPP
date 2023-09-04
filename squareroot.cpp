#include<iostream>
using namespace std;
long long int squareRoot(int n){//using binary search finding square root 
	int s = 0, e = n;
	long long int square, ans;
	long long int mid = s + (e-s)/2;
	while(s<e){
		square = mid * mid;
		if(square == n){
			return mid;
		}
		if(square > n ){
			e = mid - 1;
		}
		else{
			ans = mid;
			s = mid + 1; 
		}
		mid = s + (e-s)/2;
	}
	return ans;
}
//to find more precise output finding out after point values 
double precision(int sq, int preci, int n ){
	double factor = 1;
	double ans = sq;
	for(int i = 0 ; i<preci ; i++){
		factor = factor /10;
		for(double j = ans; j*j<n ; j = j + factor){
			ans = j;
		}
	}
	return ans;
}


int main(){
	int no;
	cout<<"Eneter the no. whose square root have to find:";
	cin>>no;
	cout<<"Square root of "<<no<<" is "<<squareRoot(no);
	int sq = squareRoot(no);
	cout<<"\nmore precise square root is "<<precision( sq,  3,  no );
	return 0;
}
