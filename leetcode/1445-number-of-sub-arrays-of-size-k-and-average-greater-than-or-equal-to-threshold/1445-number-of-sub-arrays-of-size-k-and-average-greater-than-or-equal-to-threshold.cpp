class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int start=0;
        int end=0;
        int ans=0;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        float avg=sum/k;
        if(avg>=threshold)
        ans++;
        end=k;
        while(end<n)
        {
            sum-=arr[start];
            sum+=arr[end];
            avg=sum/k;
            if(avg>=threshold)
            ans++;
            start++;
            end++;
        }
        return ans;
    }
};