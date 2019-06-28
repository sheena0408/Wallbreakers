class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int hs[26]={0},hc[26]={0},ans=0;
        for(int i=0;i<S.length();i++){
            if(islower(S[i])) hs[S[i]-'a']++;
            else hc[S[i]-'A']++;
        }
        for(int i=0;i<J.length();i++){
            if(islower(J[i])) ans+=hs[J[i]-'a'];
            else ans+=hc[J[i]-'A'];
        }
        return ans;
    }
};
