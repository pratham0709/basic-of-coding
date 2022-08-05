
// FIND THE SUM Of ALL EVEN NO.  .................
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"ENter The Value Of N: "<<endl;
	cin>>n;
	int i = 2;
	int sum = 0;
	while(i<=n){
		if(i % 2 == 0){
			sum = sum + i;
		}
		i = i + 1;
	}
	cout<<" SUM OF ALL EVEN NO IS "<<sum<<endl;
}

/* OUTPUT......
ENter The Value Of N:
8
 SUM OF ALL EVEN NO IS 20

--------------------------------
Process exited after 1.72 seconds with return value 0
Press any key to continue . . .
*/
