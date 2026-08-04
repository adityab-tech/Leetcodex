class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> x;
        unordered_map<int,int> freq;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=nums[0];i<=nums[n-1];i++){
            if(freq[i]==0){
                x.push_back(i);
            }
        }
        return x;
    }
};