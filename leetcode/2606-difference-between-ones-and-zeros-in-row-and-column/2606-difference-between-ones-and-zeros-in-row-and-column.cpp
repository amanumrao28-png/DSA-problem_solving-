class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
         vector<int>onesR(n,0);
         vector<int>zeroR(n,0);
         vector<int>onesC(grid[0].size(),0);
         vector<int>zeroC(grid[0].size(),0);
        for(int i=0;i<n;i++)
        {     int c1=0;
              int c2=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                   c1++;
                }
                else
                c2++;
            }
            onesR[i]=c2;
            zeroR[i]=c1;
            
        }
        for(int i=0;i<grid[0].size();i++)
        {     int c1=0;
              int c2=0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==0)
                {
                   c1++;
                }
                else
                c2++;
            }
            onesC[i]=c2;
            zeroC[i]=c1;
            
        }
        vector<vector<int>>ans(n,vector<int>(grid[0].size(),0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                ans[i][j]=onesR[i]+onesC[j]-zeroR[i]-zeroC[j];
            }
        }
        return ans;
    }
};