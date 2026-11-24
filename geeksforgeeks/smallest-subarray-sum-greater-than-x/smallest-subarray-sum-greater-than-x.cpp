class Solution {
  public:
    int smallestSubWithSum(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int start=0;
        int end=0;
        int ans=INT_MAX;
        int sum=0;
        while(end<n)
        {
            sum+=arr[end];
            if(sum>x)
            {
                while(sum>x)
                 {
                sum-=arr[start];
                start++;
                  }
                  ans=min(ans,end-start+2);
            }
            end++;
        }
        if(ans>n)
        return 0;
        return ans;
        
    }
};