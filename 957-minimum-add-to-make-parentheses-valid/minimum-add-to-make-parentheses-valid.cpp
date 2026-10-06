class Solution {
public:
    int minAddToMakeValid(string s) {
        int close=0,open=0;
        for(char x:s){
            if(x=='('){
                close++;
            }
            else if(x==')'){
                if(close>0){
                    close--;
                }
                else{
                    open++;
                }
            }
        }
        return open+close;
    }
};