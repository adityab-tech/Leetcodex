class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
       int ans=requests[0];
       int x=requests.size();
       for(int i=1;i<x;i++){
        ans+=abs(requests[i]-requests[i-1]);
       }
       return ans;
    }
};