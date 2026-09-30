int pivot(vector<int>& nums)
{
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(nums[mid]>=nums[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;

}
int binary(vector<int>& nums,int st,int en, int target)
{
    int s=st;
    int e=en;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int p=pivot(nums);
        if(nums[p]<=target && target<=nums[nums.size()-1])
            return binary(nums,p,nums.size()-1,target);
        else
        {
            return binary(nums,0,p-1,target);
        }
    }
};