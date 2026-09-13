class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        long long ans=0;
        stack<int> st;
        int n=nums.size();
        unordered_map<int,int> m;
        for (int i=0;i<n;i++) {
            while (!st.empty() && nums[i]<st.top()){
                m[st.top()]--;
                st.pop();
            }
            ans+=(st.size()-m[nums[i]]);
            st.push(nums[i]);
            m[nums[i]]++;
        }
        return ans ; 
    }
};