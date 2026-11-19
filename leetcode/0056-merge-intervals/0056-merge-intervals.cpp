class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        if(n==1)
         ans.push_back(intervals[0]);
        else
        {
            int f1=intervals[0][0];
            int f2=intervals[0][1];
            int f3=intervals[1][0];
            int f4=intervals[1][1];
            if(f3<=f2)
            ans.push_back({f1,max(f2,f4)});
            else
            {
                ans.push_back({f1,f2});
                ans.push_back({f3,f4});
            }
            for(int i=2;i<n;i++)
            {
                int s1=intervals[i][0];
                int s2=intervals[i][1];
                int s3=ans.back()[0];
                int s4=ans.back()[1];
                if(s1<=s4)
                ans.back()[1]=max(s4,s2);
                else
                ans.push_back({s1,s2});
            }
        }
        return ans;
    }
};