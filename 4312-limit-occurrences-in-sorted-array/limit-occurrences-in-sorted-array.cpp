class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
    vector<int> result;
    unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
        if (freq[x] <= k) {
            result.push_back(x);
        }
    }
    return result;
    }
};