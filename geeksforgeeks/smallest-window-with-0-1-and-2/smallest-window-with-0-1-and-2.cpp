class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        int n=s.size();
        unordered_map<char,int>mp;
        int start=0;
        int end=0;
        int ans=INT_MAX;
        while(end<n)
        {
            mp[s[end]]++;
            if(mp.size()==3)
            {
                while(mp.size()==3)
                {
                    mp[s[start]]--;
                    if(mp[s[start]]==0)
                    mp.erase(s[start]);
                    start++;
                }
                ans=min(ans,end-start+2);
            }
            end++;
        }
        if(ans>n)
        return -1;
        else
        return ans;
    }
};
