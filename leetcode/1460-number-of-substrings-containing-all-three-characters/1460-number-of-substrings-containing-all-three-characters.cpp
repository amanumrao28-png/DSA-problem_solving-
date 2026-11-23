class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int start=0;
        int end=0;
        int ans=0;
        while(end<n)
        {
            mp[s[end]]++;
            while(mp.size()==3)
            {
                ans+=n-end;
                mp[s[start]]--;
                if(mp[s[start]]==0)
                mp.erase(s[start]);
                start++;
            }
            end++;
        }
        return ans;
    }
};