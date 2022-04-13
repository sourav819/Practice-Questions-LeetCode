class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int length=nums.size();
        vector<int> ans(length);
        for(int i=0; i<length; i++)
        {
            int temp=nums[nums[i]];
            ans[i]=temp;
        }
        return ans;
    }
};