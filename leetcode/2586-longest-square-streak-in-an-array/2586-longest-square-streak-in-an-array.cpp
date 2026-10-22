class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<double,long long>mp;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=1;
        for(int i=0;i<n;i++)
        {     double root=sqrt(nums[i]);
            if(mp.find(root)==mp.end())
              {mp[nums[i]]=c;}
            if(mp.find(root)!=mp.end())
            {
                mp[nums[i]]=mp[root]+1;
            }  
        }
        long long len=-1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {    if(i->second>=2)
            len=max(len,i->second);
        }
        return len;
    }
};