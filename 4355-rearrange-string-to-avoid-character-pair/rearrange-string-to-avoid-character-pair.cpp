class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t{};
        for(char ch : s)
            if(ch == y)
                t += ch;
        for(char ch : s)
            if(ch != y)
                t += ch;
        return t;
    }
};