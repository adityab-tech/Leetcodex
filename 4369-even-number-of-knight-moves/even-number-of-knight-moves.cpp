class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x=start[0];
        int y=start[1];
        int fx=target[0];
        int fy=target[1];
        if((x+y)%2==(fx+fy)%2) return true;
        return false;
    }
};