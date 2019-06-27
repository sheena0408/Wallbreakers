class Solution {
public:
    bool allsmall(string s,int start,int end){
        for(int i=start;i<end;i++){
            if(isupper(s[i])) return false;
        }
        return true;
    }
    bool allcap(string s,int start,int end){
        for(int i=start;i<end;i++){
            if(islower(s[i])) return false;
        }
        return true;
    }
    bool detectCapitalUse(string a) {
        int n=a.length();
        if(allsmall(a,0,n)) return true;
        if(isupper(a[0])){
            if(allsmall(a,1,n) || allcap(a,1,n)) return true;
        }
        return false;
    }
};
