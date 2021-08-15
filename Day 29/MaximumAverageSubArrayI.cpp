class Solution { // Maximum Sum subarray of size k 
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum=0,j=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxSum=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxSum = max(maxSum,sum);
        }
        return (double)maxSum/k;
        
    }
};