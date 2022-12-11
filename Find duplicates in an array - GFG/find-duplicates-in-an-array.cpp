//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
        sort(arr,arr+n);
        for (int i=0;i<n-1;i++){
            if (arr[i]==arr[i+1]){
                v.push_back(arr[i]);
            }
        }
        vector<int> ans;
        if (v.size()==1){
            ans=v;
        }
        else {
        for (int i=0;i<v.size();i++){
            if (i==v.size()-1){
                ans.push_back(v[i]);
            }
            else
            if (v[i]!=v[i+1]){
                ans.push_back(v[i]);
                
            }
            
        }
        }
        if (ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
       
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends