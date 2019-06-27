class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        //counting 1s in a
        int ans=0;
        while(a>0){
            ans += a&1; //change to bin rep
            a>>=1; //increments
        }
        return ans;
    }
};
