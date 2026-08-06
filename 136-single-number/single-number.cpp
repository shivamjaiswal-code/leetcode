class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    int xor;
    //    for(int n:nums) {
    //     xor=xor^n;
    //    }
    //    return xor;
    int result=0;
    for(int i=0;i<nums.size();i++)
    {
        result=nums[i]^result;
    }
    return result;
    }
};
