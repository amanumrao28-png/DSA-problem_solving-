class Solution {
public:
    int minimumDeletions(string s) {
       int n=s.size();
       int count=0;
       int bcount=0;
       for(int i=0;i<n;i++)
       {
        if(s[i]=='b')
        bcount++;
        else
        {
            count=min(count+1,bcount);
        }

       }
       return count;
    }
};