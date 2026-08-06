class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
// HashMap <Integer, Integer> map = new HashMap<>();

//         for (int i = 0; i < nums.length; i++) {
//             int jarurat = target - nums[i];

//             if (map.containsKey(jarurat)) {
//                 return new int[]{i, map.get(jarurat)};
//             }

//             map.put(nums[i], i);
//         }

//         return new int[]{};
int n=nums.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(nums[i] + nums[j] == target)
        {
            return {i,j};
        }
        
    }
}
        return {};


    }
};