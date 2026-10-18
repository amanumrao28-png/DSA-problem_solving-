
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long prod = 0;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           v.push_back(nums[i]*nums[i]);
        }
        int start=0;
        int end=v.size()-1;
        sort(v.begin(),v.end());
        while(start<=end)
        {
             if(start==end)
             {
                prod+=v[start];
             }
             prod+=v[end];
             prod-=v[start];
             start++;
             end--;
        }
        return prod;
    }
};
