class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
             if(find(nums.begin(),nums.end(),-nums[i])!=nums.end()&&nums[i]>0&&nums[i]>maxi)
             maxi=nums[i];
        }
        return maxi;
    }
};