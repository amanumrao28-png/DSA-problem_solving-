class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[order[i]]=i;
        }
        vector<int>v(n,0);
        for(int i=0;i<friends.size();i++)
        {
            int temp=mp[friends[i]];
            v[temp]=friends[i];
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=0)
            ans.push_back(v[i]);
        }
        return ans;
    }
};