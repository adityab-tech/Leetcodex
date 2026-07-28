class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int x=n/2;
        sort(s.begin(),s.begin()+x);
        sort(s.end()-x,s.end());
        reverse(s.end()-x,s.end());
        return s;
    }
};