
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<string, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({names[i], heights[i]});
        }

        sort(v.begin(), v.end(), [](const pair<string, int>& a,
                                    const pair<string, int>& b) {
            return a.second > b.second;
        });

        vector<string> ans;

        for (auto i = v.begin(); i != v.end(); i++) {
            ans.push_back(i->first);
        }

        return ans;
    }
};
