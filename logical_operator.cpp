#include<iostream>
using namespace std;

int main(){
	// Logical AND....
	int a = 10;
	int b = 20;
	int c = 40;
	
	cout<<((a>= b) && (a != b) && (a <= c))<<endl;
	
	// Logical OR....
	int x = 5;
	int y = 8;
	int z = 4;
	
	cout<<((x<=y) || (y ==z) || (z!=x))<<endl;
	
	// Logical NOT....
	int d = 27;
	int e = 0;
	int f = 45;
	
	cout<<(!d)<<endl;
	cout<<(!e)<<endl;
	cout<<(!f)<<endl;
}
