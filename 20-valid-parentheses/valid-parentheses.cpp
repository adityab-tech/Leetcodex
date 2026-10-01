class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n%2!=0){
            return false;
        }
        vector<char> st(n);
        int push=0;
        for(char c:s){
            if (c=='('){
                st[push++]=')';
            } 
            else if (c=='{'){
                st[push++]='}';
            } 
            else if (c=='['){
                st[push++]=']';
            }
            else{
                if(push==0 || st[--push]!=c){
                    return false;
                }
            }
        }
        return (push==0);
    }
};