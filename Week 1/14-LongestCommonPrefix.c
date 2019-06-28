class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n<1) return "";


        string s=strs[0];
        for(int i=0;i<n;i++){
            int minlen=min(s.length(),strs[i].length());
            s=s.substr(0,minlen); //min len of all strings...taking len chars from first string[0]


            for(int j=0;j<minlen;j++){
                if(s[j]!=strs[i][j]) { //if current string char is not equal to the next string in given vector
                    s=s.substr(0,j);
                    break;
                }
                if(s=="") return "";
            }
        }
        return s;
    }
};
