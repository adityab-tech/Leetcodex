class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int>m;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second%k==0){
                ans+=x.first*x.second;
            }
        }
        return ans;
    }
};