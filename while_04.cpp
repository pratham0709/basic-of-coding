// FIND THE N IS PRINME OR NOT .................
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter The Value Of n :"<<endl;
	cin>>n;
	int i = 2;
	while(i<n){
		if( n % i ==0){
			cout<<" THE VALUE OF " <<n<< " IS NOT PRIME"<<endl;
			return 0;
		}
		i = i + 1;
	}
	cout<<" THE VALUE OF N "<<n<<" IS PRIME "<<endl;
	return 0;
}


/* OUTPUT
Enter The Value Of n :
11
THE VALUE OF 11 IS PRIME

--------------------------------
Process exited after 1.507 seconds with return value 0
Press any key to continue . . .
*/
