class Solution {
public:
    int rob(vector<int>& nums) {
        int money1=0,money2=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i%2==0){
            money1+=nums[i];
            money1=max(money1,money2);
        }
        else{
            money2+=nums[i];
            money2=max(money1,money2);
        }
    }
    return max(money1,money2);
    }
};