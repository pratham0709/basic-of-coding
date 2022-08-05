 // } Driver Code Ends
//User function Template for C++
#include<iostream>
using namespace std;

void reverse_dig(int &a,int &b)
{
    //a = 1234;
    //b = 567890;
    int rev_a = 0;
    while(a>0){
        rev_a = 10*rev_a + a % 10;
        a = a / 10;
    }
    a = rev_a;
    
    int rev_b = 0;
    while(b>0){
        rev_b = 10*rev_b + b % 10;
        b = b / 10;
    }
    b = rev_b;
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
    
    //temp=b;
    //b=a;
    //a=temp;
}
// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends
