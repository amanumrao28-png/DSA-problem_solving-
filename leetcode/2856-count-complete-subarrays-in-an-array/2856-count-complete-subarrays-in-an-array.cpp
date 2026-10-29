class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        int t=temp.size();
        int start=0;
        int end=0;
        int len=0;
        unordered_map<int,int>mp;
        while(end<n)
        {
           mp[nums[end]]++;
           while(mp.size()==t)
           {
            len+=n-end;
           mp[nums[start]]--;
            if(mp[nums[start]]==0)
            {
                mp.erase(nums[start]);
            }
            start++;
           }
           end++;
        }
        return len;
    }
};