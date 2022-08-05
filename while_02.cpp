
// FIND THE SUM FROM  1 TO N..................
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin>>n;
	int i = 1;
	int sum = 0;
	while(i<=n){
		sum = sum + i;
		i = i + 1;
	}
	cout<<"Sum OF "<<1<<" TO "<<n<<" is "<<sum<<endl;
	
}

/* OUTPUT
8
Sum OF 1 TO 8 is 36

--------------------------------
Process exited after 1.909 seconds with return value 0
Press any key to continue . . .

*/











