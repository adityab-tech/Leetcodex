class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n,ds=0,dp=1;
        while(n>0){
            int ld=n%10;
            ds+=ld;
            dp*=ld;
            n/=10;
        }
        return (org%(ds+dp)==0);
    }
};