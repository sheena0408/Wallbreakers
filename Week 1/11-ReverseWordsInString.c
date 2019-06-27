class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        for(int i=0,j=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1; //new word starts here
            }
        }
        return s;
    }
};
