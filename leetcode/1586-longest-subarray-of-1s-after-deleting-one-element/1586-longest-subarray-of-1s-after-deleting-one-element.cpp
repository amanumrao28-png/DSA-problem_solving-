class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0;
        int end=0,t;
        int k=1;
        int n=nums.size();
        int ans=-1;
        while(end<n)
        {
            if(nums[end]==0&&k==1)
            {
                k--;
                t=end;
            }
            else if(nums[end]==0&&k==0)
            {    ans=max(ans,end-start-1);
                start=t+1;
                t=end;
            }
           end++;
        }
        ans=max(ans,end-start-1);
        return ans;
    }
};