//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int originalno=n;////this temporary varaible is used as n value will be changed ///
        int temp=n;
        int sumofpower=0;
        int count=0;
        ///get digits for power value first///
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        ///to calculate sum of digits///
        while(n!=0){
            int digits=n%10;
            n=n/10;
            sumofpower+=pow(digits,count);
        }
        ////checking for armstrong number///
        if(sumofpower==originalno){
        return "Yes";
        }
        else{
        return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends