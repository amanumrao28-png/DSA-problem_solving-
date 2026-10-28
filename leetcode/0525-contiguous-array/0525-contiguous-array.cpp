class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int len=0;
        long long prefixSum=0;
        for(int i=0;i<n;i++)
        {
               if(nums[i]==0)
               prefixSum--;
               else
               prefixSum++;
               if(mp.find(prefixSum)!=mp.end())
               len=max(len,i-mp[prefixSum]);
               if(mp.find(prefixSum)==mp.end())
               mp[prefixSum]=i;
        }
        return len;
    }
};