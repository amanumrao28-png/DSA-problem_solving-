class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int end=0;
        int ans=-1;
        while(end<n)
        {
            if(nums[end]==0)
            {
                k--;
            }
                 while(k<0)
                 {
                    if(nums[start]==0)
                    k++;
                    start++;
                 }
             ans=max(ans,end-start+1);
            end++;
        }
        ans=max(ans,end-start);
        return ans;
    }
};