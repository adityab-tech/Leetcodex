class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int s=0,c=0;
        for(int i=0;i<n;i++){
            if(c==10){
                break;
            }
            if(events[i]=="W"){
                c++;
            }
            else if(events[i]=="WD" ||events[i]=="NB"){
                s++;
            }
            else{
                s+=stoi(events[i]);
            }
        }
        return {s,c};
    }
};