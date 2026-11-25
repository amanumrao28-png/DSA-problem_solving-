class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
      int n=nums.size();
      int count=0;
      for(int i=0;i<n;i++)
      {
        int temp=nums[i];
        while(temp>0)
        {
            int x=temp%10;
            if(x==digit)
            count++;
            temp/=10;
        }
      }
      return count;  
    }
};