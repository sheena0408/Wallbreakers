class Solution {
public:
    bool isvowel(char x){
        x=tolower(x);
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') return true;
        return false;
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        if(s.length()<2) return s;

        while(l<r){
            while(!isvowel(s[l]) && l<r) l++;
            while(!isvowel(s[r]) && l<r) r--;
            swap(s[l++],s[r--]);
        }
        return s;
    }
};
