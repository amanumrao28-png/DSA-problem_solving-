class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int c=1;
        vector<int>row(n,0);
        vector<int>col(grid[0].size(),0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1&&(row[i]>1||col[j]>1))
                ans++;
            }
        }
        return ans;
    }
};