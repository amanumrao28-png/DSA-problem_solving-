class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int,long long>mp;
        long long count=0;
        int n=tasks.size();
        int start=0;
        long long x=0;
        if(tasks.size()==1)
        return 1;
        while(start<n)
        {  
            if(mp.find(tasks[start])==mp.end())
            {   count++;
                mp[tasks[start]]=count;
            }
            else
            { 
                long long temp1=count+1-mp[tasks[start]];
                if(temp1<=space)
                {
                    x=space-temp1+1;
                   count+=x;
                }
                count++; 
                mp[tasks[start]]=count; 
            }
            start++;
        }
        return count;
    }
};