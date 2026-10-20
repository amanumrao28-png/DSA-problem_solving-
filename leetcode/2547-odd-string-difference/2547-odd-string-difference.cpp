class Solution {
public:
    string oddString(vector<string>& words) {
        int n=words.size();
        map<vector<int>,vector<int>>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {   
            for(int j=1;j<words[i].size();j++)
            {
                 int temp=(words[i][j]-'a')-(words[i][j-1]-'a');
                 v.push_back(temp);
            }
            mp[v].push_back(i);
            v.clear();
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
           vector<int>temp=i->second;
           if(temp.size()==1)
           return words[temp[0]];
        }
        return "";
    }
};