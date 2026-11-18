class Solution {
public:
    int minChanges(string s) {
       int n=s.size();
       vector<vector<char>>v;
       vector<char>temp;
       for(int i=0;i<n;i=i+2)
       {
          temp.push_back(s[i]);
          temp.push_back(s[i+1]);
          v.push_back(temp);
          temp.clear();
       }
       int m=v.size();
       int count=0;
       for(int i=0;i<m;i++)
       {
         if(v[i][0]!=v[i][1])
         count++;
       }
       return count;
    }
};