class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=count(nums.begin(),nums.end(),0);
        vector<int> k;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                k.push_back(nums[i]);
            }
        }
        for(int i=0;i<l;i++)
        {
            k.push_back(0);
        }
        int r=0;

        for(auto i:k)
        {
            nums[r]=i;
            r++;
        }
        
    }
};