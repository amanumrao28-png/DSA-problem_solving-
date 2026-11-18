class Solution {
public:
    int minChanges(string s) {
       int n=s.size();
       int count=0;
       for(int i=0;i<n;i=i+2)
       {
          char first=s[i];
          char second=s[i+1];
          if(first!=second)
          count++;
       }
       return count;

    }
};