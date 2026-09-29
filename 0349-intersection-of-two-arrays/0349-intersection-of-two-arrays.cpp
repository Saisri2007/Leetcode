class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
            {
                if(find(n.begin(),n.end(),nums1[i])==n.end())
                {
                    n.push_back(nums1[i]);
                }
            }
        }
        return n;
        
    }
};