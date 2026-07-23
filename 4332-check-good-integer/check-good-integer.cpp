class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0,sq=0;
        while(n>0){
            int x=n%10;
            s+=x;
            sq+=(x*x);
            n/=10;
        }
        return sq-s>=50;
    }
};