class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0,pow=1,sum=0;
        while(n){
            int l=n%10;
            if(l){
                ans+=l*pow;
                sum+=l;
                pow*=10;
            }
            n/=10;
        }
        return ans*sum;
    }
};