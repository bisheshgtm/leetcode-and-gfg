class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // we can optimize the program using Kadane's algorithm 
        int currsum=0;
        int mx=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            currsum+=nums[i];
             mx=max(mx,currsum);
            if (currsum<0){
                currsum=0;
            }
           
        }
        return mx;
    }
};