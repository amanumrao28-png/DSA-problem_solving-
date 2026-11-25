class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n=queries.size();
        vector<int>ans;
        for(int i=1;i<=m;i++)
        {
            ans.push_back(i);
        }
        vector<int>finall;
        for(int i=0;i<n;i++)
        {
            auto it=find(ans.begin(),ans.end(),queries[i]);
            finall.push_back(it-ans.begin());
            rotate(ans.begin(), it, it + 1);
        }
        return finall;
    }
};