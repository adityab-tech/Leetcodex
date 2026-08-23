class Solution {
public:
    bool isPalindromic(string s) {
        
//every char into 8 bit binary 
        string ans="";
        for (char x:s){
            int ascii=(int)x;
            for(int i=7; i>=0;i--) {
    // appends 1 if it is active else 0
                ans+= (ascii &(1 << i)) ? '1' : '0';
            }
        }
        
//pallindrome hai bc
        int n=ans.size();
        int l=0,r=n-1;
        while(l<r){
            if(ans[l]!=ans[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};