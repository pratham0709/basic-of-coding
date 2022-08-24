/*
  Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with increasing order and difference being 1.

Example 1:

Input:
N = 3
Output:
* ** ***
Explanation:
First, print 1 asterisk then space after
that print 2 asterisk and space after that 
print 3 asterisk now stop as N is 3.
Example 2:

Input:
N = 5
Output:
* ** *** **** ***** 
Explanation:
First, print 1 asterisk then space after
that print 2 asterisk and space and do this
3 more times.
Your Task:  
You don't need to read input. Your task is to complete the function printPattern() which takes an integer N as an input parameter and print the above pattern.

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 1000


OUTPUT......
*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printPattern(int N)
    {
        // Write Your Code here
        int i = 1;
        while(i<=N){
            int j = 1;
            while(j<=i){
                cout<< "*";
                j = j+1;
            }
            cout<<" ";
            i = i+1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printPattern(N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
