class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        for(int x:arr1) {
            bool found = false;
            for(int y:arr2) {
                if(abs(x-y)<=d) {
                    found = true;
                    break;
                }
            }
            if(!found){
                res++;
            }
        }
        return res;
    }
};