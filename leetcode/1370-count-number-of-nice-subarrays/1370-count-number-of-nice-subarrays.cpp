class Solution {
public:
     int atmost(vector<int>&nums,int k)
     {
        int start=0;
        int end=0;
        int n=nums.size();
        int odd=0;
        int ans=0;
        while(end<n)
        {
            if(nums[end]%2!=0)
            odd++;
            while(odd>k)
            {
                if(nums[start]%2!=0)
                {
                    odd--;
                }
                start++;
            }
            end++;
            ans+=end-start+1;
        }
        return ans;
     }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};