class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i]<=0 || nums[i]>n){
                nums[i]=n+1;
            }
        }
        for (int i = 0; i < n; i++){
            if (abs(nums[i])>n){
                continue;
            }
            else{
                nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
            }
        }
        if (nums[0]>0){
            return 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};