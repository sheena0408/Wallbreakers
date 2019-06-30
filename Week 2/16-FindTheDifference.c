class Solution {
public:
    char findTheDifference(string s, string t) {
        int h[26]={0};
        char ans;
        for(int i=0;i<s.length();i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            h[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(h[i]){
                ans = 'a'+i;
                break;
            }
        }
        return ans;
    }
};
