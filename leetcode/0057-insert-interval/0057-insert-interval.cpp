class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>temp;
        for(int i=0;i<intervals.size();i++)
        temp.push_back(intervals[i]);
        temp.push_back(newInterval);
        vector<vector<int>>ans;
        sort(temp.begin(),temp.end());
        if(temp.size()==1)
        ans.push_back(temp[0]);
        else
        {
            int f1=temp[0][0];
            int f2=temp[0][1];
            int f3=temp[1][0];
            int f4=temp[1][1];
            if(f3<=f2)
            ans.push_back({f1,max(f2,f4)});
            else
            {ans.push_back({f1,f2});
            ans.push_back({f3,f4});}
            for(int i=2;i<temp.size();i++)
             {
                int s1=temp[i][0];
            int s2=temp[i][1];
            int s3=ans.back()[0];
            int s4=ans.back()[1];
            if(s1<=s4)
            ans.back()[1]=max(s2,s4);
            else
            {ans.push_back({s1,s2});
            }
             }
        }
        return ans;
    }
};