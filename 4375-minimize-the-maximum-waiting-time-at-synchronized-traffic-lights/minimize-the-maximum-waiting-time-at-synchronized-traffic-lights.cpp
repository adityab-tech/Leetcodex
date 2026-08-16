class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int mgreen=0,ans=0;
        for(int x:lights){
            mgreen=max(mgreen,x);
        }
        for(int t:arrivalTime){
            int waiting=0;
            int r=t%period;
            if(r>=mgreen){
                waiting=period-r;
            }
            ans=max(ans,waiting);
        }
        return ans;
    }
};