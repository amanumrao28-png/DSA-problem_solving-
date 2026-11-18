class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            int start=nums[i][0];
            int end=nums[i][1];
            for(int j=start;j<=end;j++)
            {
                if(st.find(j)==st.end())
                 st.insert(j); 
            }
        }
        return st.size();
    }
};