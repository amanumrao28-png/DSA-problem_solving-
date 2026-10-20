class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n=s.size();
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]].push_back(i);
        }
        int index=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<int>temp=i->second;
            int t=temp[1]-temp[0]-1;
            if(distance[i->first-'a']==t)
            index=1;
            else
            {index=0;
            break;}
        }
        if(index==1)
        return true;
        return false;
    }
};