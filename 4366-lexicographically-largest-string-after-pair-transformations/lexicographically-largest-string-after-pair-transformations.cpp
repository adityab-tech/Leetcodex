class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector <string> ans;
        for(int x:nums){
            string s="";
            int n=0;
            while(x>0){
                if(x%2==1){
                    if(n<=25){
                        s+=char('a'+n);
                    }
                    else {
                        int count=1 << (n - 25);
                        while (count--){
                            s +='z';
                        }
                    }
                }
                x/=2;
                n++;
            }
            sort(s.rbegin(),s.rend());
            ans.push_back(s);
        }
        return ans;
    }
};