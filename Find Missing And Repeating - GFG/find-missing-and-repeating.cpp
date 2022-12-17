//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
    //     int *a;
    // a=new int[2];
    
    // sort(arr,arr+n);
    
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(arr[i]==arr[i+1]){
    //         a[0]=arr[i];
    //     }
    // }
    // if (arr[0]==n){
    //         a[1]=arr[0]-1;
    //         goto x;
    //     }
    // for(int i=a[0];i<n;i++){
        
    //     if(arr[i]!=i){
    //         a[1]=i;
    //         break;
    //     }
    // }
    // x:
    // return a;
        int *ans=new int[2];
        const int N=1e6+2;
        bool check[N];
        for (int i=0;i<N;i++){
            check[i]=0;
        }
        for (int i=0;i<n;i++){
            if (check[arr[i]]==1){
                ans[0]=arr[i];
            }
            else{
                check[arr[i]]=1;
            }
        }
        for (int i=1;i<=n;i++){
            if (check[i]==0){
                ans[1]=i;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends