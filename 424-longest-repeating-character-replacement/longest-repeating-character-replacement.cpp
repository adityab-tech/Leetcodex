class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int n=s.size();
        int l=0,r=0,maxlen=0,maxcount=0;
        while(r<n){
            freq[s[r] - 'A']++;
            maxcount = max(maxcount, freq[s[r] - 'A']);
            while ((r-l+1)-maxcount > k) {
                freq[s[l]-'A']--;
                l++;
            }
            maxlen = max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};