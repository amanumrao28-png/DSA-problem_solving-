
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());

        long long sum = skill[0] + skill[n - 1];
        int start = 1;
        int end = n - 2;

        long long ans = 1LL * skill[0] * skill[n - 1];

        while (start <= end) {
            if (skill[start] + skill[end] != sum)
                return -1;

            ans += 1LL * skill[start] * skill[end];

            start++;
            end--;
        }

        return ans;
    }
};
