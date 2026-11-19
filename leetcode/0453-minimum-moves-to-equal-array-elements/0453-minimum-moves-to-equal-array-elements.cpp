class Solution {
public:
    int minMoves(vector<int>& nums) {
       int n=nums.size();
       int max_elem=*min_element(nums.begin(),nums.end());
       int total=0;
       for(int i=0;i<n;i++)
       {
        total+=abs(nums[i]-max_elem);
       }
       return total;
    }
};