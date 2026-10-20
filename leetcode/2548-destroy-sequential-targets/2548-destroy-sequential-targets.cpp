class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        map<int,vector<int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]%space].push_back(nums[i]);
        }
        int maxi=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<int>temp=i->second;
             maxi = max(maxi, (int)temp.size());
        }
        int ans=INT_MAX;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<int>temp=i->second;
          if (temp.size() == maxi) {
          ans = min(ans, *min_element(temp.begin(), temp.end()));
           }
        }
        return ans;
    }
};