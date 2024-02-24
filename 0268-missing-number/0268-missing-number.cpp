class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n,d_sum=0,a_sum=0;
       n=nums.size();
       d_sum=n*(n+1)/2;
        for(int i=0;i<nums.size();i++)
        {
           d_sum=d_sum-nums[i];
        }
        return d_sum;
    }
};