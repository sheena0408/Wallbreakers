class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length(),val=0,p=0;
        if(n==0) return 0;
        for(int i=n-1;i>=0;i--){
            int temp=s[i]-64;
            val += pow(26,p)*temp;
            p++;
        }
        return val;
    }
};
