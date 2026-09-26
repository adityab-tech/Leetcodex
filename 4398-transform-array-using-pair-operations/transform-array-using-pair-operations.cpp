class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long ansx=0,ansy=0;
        for(long long x:source){
            ansx+=x;
        }
        for(long long x:target){
            ansy+=x;
        }
        return (ansx==ansy);
    }
};