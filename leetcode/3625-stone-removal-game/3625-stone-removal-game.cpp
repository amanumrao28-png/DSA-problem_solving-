class Solution {
public:
    bool canAliceWin(int n) {
        int temp=n;
        int in=10;
        int count=0;
        while(temp>0)
        { 
           if(temp>=in)
           {
            temp=temp-in;
            in--;
            count++;
           }
           else
           {
            break;
           }
        }
        if(count%2!=0)
        return true;
        return false;
    }
};