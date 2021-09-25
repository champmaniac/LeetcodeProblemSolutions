class Solution {
public:
    // int combinationSum4(vector<int>& nums, int target) { // Brute Force
    //     if(target==0)                                    // TC O(nums^target)
    //         return 1;
    //     int res=0;
    //     for(auto &num:nums){
    //         if(num<=target)
    //             res+=combinationSum4(nums,target-num);
    //     }
    //     return res;
    // }
    
    int combinationSum4(vector<int>& nums,int target){   // DP Top Down
        vector<int> dp(target+1,-1);                     // TC O(nums*target)
        return helper(nums,target,dp);
    }
    int helper(vector<int>& nums,int target, vector<int>& dp){
        if(target==0)
            return 1;
        if(dp[target]!=-1)
            return dp[target];
        dp[target]=0;
        for(auto &num:nums){
            if(num<=target){
                dp[target]+=helper(nums,target-num,dp);
            }
        }
        return dp[target];
    }
};