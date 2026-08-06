class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //   int max_sum=INT_MIN;
    //   for(int st=0;st<nums.size();st++){
    //     int c_sum=0;
    //     for(int end=st;end<nums.size();end++){
    //         c_sum+=nums[end];
    //         max_sum=max(c_sum,max_sum);
    //     }
    //   }  
    //     return max_sum;
    int max_sum=INT_MIN;
    int current_sum=0;
    for(int i=0;i<nums.size();i++)
    {
        current_sum =current_sum+nums[i];
        max_sum=max(current_sum,max_sum);
        if(current_sum<0)
        {
            current_sum=0;
        }
    }
    return max_sum;
    }
};