class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int t = flowerbed.size();
        if(t == 1 && flowerbed[0] == 0)
        {
            n--;
            flowerbed[0] = 1;
        }
        else if(t > 1 && flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            n--;
            flowerbed[0] = 1;
        }
        for(int i = 1; i < t-1; i++)
        {
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
            {
                n--;
                flowerbed[i] = 1;
            }
        }
        if(t > 1 && flowerbed[t-1] == 0 && flowerbed[t-2] == 0)
        {
            n--;
            flowerbed[t-1] = 1;
        }
        return n <= 0;
    }
};