class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int start=0;
        // int end=nums.size()-1;
        // while(start<end)
        // {
        //     if(nums[start]==nums[end])
        //     {
        //         return true;
        //         end--;
        //         start++;

        //     }
        //     end--;
        // }
        // return 0;
sort(nums.begin() ,nums.end());
for(int i=0;i<nums.size()-1;i++)
{
    if(nums[i]==nums[i+1])
    {
        return true;
    }
}
return false;
        
}
    
};