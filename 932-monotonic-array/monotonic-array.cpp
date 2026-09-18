class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int asc=true;
        int desc=true;
        // bool sort=false;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                asc=false;
            }
            else if(
                nums[i]<nums[i+1]
            ){
                desc=false;
            }
        }
        
       return asc||desc;
    }
};