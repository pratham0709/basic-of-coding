#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter The Value Of A "<<endl;
	cin>>a;
	
	if(a>0){
		cout<<" A is Positive"<<endl;
		
	}
	else{
	
		if(a==0){
			cout<<"A is 0"<<endl;
		}
		else{
			cout<<" A is Negative"<<endl;
		}
	}
	return 0;
}


/* OUTPUT.......
Enter The Value Of A
5
 A is Positive

--------------------------------
Process exited after 2.303 seconds with return value 0
Press any key to continue . . .


Enter The Value Of A
0
A is 0

--------------------------------
Process exited after 1.342 seconds with return value 0
Press any key to continue . . .

Enter The Value Of A
-2
 A is Negative

--------------------------------
Process exited after 3.65 seconds with return value 0
Press any key to continue . . .

