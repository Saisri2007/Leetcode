class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> c;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                c.push_back(i);
        }
        return c;
    }
};