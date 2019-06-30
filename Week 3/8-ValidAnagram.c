class Solution {
public:
    bool isAnagram(string s, string t) {
        /*Soln2*/
        int n=s.length(),m=t.length(),i=0,j=0;
        if(m!=n) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<n && j<m){
            if(s[i++]!=t[j++]){
                return false;
            }
        }
        return true;
    }
};
