class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            hash[s[i]%26]++;
            hash[t[i]%26]--;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=0) return false;
        }
        return true;
    }
};
