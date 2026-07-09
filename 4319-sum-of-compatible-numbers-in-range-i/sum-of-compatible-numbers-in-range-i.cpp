class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int a=0;
        for(int i=max(1,n-k);i<n+k+1;i++){
            if((n&i)==0){
                a+=i;
            }
        }
        return a;
    }
};