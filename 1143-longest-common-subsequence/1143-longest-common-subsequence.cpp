class Solution {
public:
    int N=1001;
    int dp[1001][1001];
    int lcs(string& s1,string& s2,int n,int m){
        if (n==0 || m==0){
            return 0;
            
        } 
        if (dp[n][m]!=-1){
            return dp[n][m];
        }
        if (s1[n-1]==s2[m-1]){
            dp[n][m]= 1+lcs(s1,s2,n-1,m-1);
        }
        else dp[n][m]= max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
        return dp[n][m];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        for (int i=0;i<N;i++){
           for (int j=0;j<N;j++)
                dp[i][j]=-1;
        }
        
        int n=text1.size();
        int m= text2.size();
        return lcs(text1,text2,n,m);
        
    }
};