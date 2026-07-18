class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n == 1)return s;
        if(n%2 == 1)n--;
        long long res = s+ ((long long)n/2)*(long long)m - (n-1)/2;  
        return res;
    }
};