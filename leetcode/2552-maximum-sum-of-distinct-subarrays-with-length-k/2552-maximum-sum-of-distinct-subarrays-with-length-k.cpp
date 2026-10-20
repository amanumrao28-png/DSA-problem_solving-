class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int end=0;
        unordered_map<int,int>mp;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<k;i++)
        {
            mp[nums[i]]++;
            sum+=nums[i];
        }
        end=k;
        if(mp.size()==k)
        {
            ans=max(ans,sum);
        }
        mp[nums[start]]--;
       if (mp[nums[start]] == 0) {
        mp.erase(nums[start]);
         }
        sum-=nums[start];
        start++;
        while(end<n)
        {
            mp[nums[end]]++;
            sum+=nums[end];
            if(mp.size()==k)
            {
                ans=max(ans,sum);
            }
            mp[nums[start]]--;
           if (mp[nums[start]] == 0) {
           mp.erase(nums[start]);
           }
            sum-=nums[start];
            start++;
            end++;
        }
        return ans; 
    }
};