class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n=speed.size();
        int ans=1,cmin=speed[n-1];
        for(int i=n-2;i>=0;i--){
            if((speed[i] <= cmin) && (position[i+1] - position[i] > distance)){
                cmin = speed[i];
                ans++;
            }
        }
        return ans;
    }
};