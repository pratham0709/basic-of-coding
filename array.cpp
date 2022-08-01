#include<iostream>
using namespace std;

int main(){
	int arr[5];
	*arr = 23;
	*(arr+1) = 56;
	*(arr+5) = 58;
	cout<<arr[1]<<endl;
	cout<<*(arr+1)<<endl;
	cout<<arr[5]<<endl;
}
