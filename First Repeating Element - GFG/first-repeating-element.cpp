//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        const int N=10e5+2;
        int idx[N];
        for (int i=0;i<N;i++){
            idx[i]=-1;
        }
        int minidx=INT_MAX;
        for (int i=0;i<n;i++){
            if (idx[arr[i]]==-1){
                idx[arr[i]]=i;
            }

            else {
                minidx=min(minidx,idx[arr[i]]);
            
            }
        
        }
        if (minidx==INT_MAX){
            return -1;
        }
        else{
            return minidx+1;
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

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends