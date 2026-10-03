class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l = nums.size();
        int k = l / 3;
        vector<int> n;

        unordered_map<int, int> mp;

        // count each number
        for(int i = 0; i < l; i++)
        {
            mp[nums[i]]++;
        }

        // your same logic
        for(int i = 0; i < l; i++)
        {
            if(mp[nums[i]] > k)
            {
                if(find(n.begin(), n.end(), nums[i]) == n.end())
                {
                    n.push_back(nums[i]);
                }
            }
        }

        return n;
    }
};