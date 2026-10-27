class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++;
       }
       vector<vector<int>>ans;
       while(mp.size()>0)
       {  vector<int>temp;
        for(auto i=mp.begin();i!=mp.end();)
        {
             temp.push_back(i->first);
                i->second--;
                if(i->second == 0) {
                   i = mp.erase(i);
               }
               else {
                   i++;
               }
       }
       ans.push_back(temp);
    }
    return ans;
    }
};