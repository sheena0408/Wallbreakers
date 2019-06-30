class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0;
        for(int y=0;y<t.length();y++){
            if(s[x]==t[y]){
                x++;
            }
        }
        return x==s.length();
    }
};
