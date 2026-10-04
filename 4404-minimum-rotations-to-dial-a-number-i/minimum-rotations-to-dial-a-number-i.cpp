class Solution {
public:
    int minRotations(string s) {
        int n=s.length();
        int ans=0,curr=0;
        for(int i=0;i<n;i++){
            int digit=s[i]-'0';
            int diff=abs(curr-digit);
            ans+=min(diff,10-diff);
            curr=digit;
        }
        return ans;
    }
};