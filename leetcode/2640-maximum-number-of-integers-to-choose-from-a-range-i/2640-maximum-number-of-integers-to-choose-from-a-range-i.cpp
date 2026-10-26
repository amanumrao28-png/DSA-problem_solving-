class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(find(banned.begin(),banned.end(),i)==banned.end())
            v.push_back(i);
        }
        int sum=0;
        int ans=0;
        for(int i=0;i<v.size();i++)
        {    sum+=v[i];
            if(sum>maxSum)
             {ans=i;
             break;}
            else
            ans=i+1; 
        }
        return ans;
    }
};