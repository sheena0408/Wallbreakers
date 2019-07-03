class Solution {
public:
    int maxProfit(vector<int>& s) {
        int ans=0;

        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]<=s[j]){
                    ans=max(ans,s[j]-s[i]);
                }
            }
        }
        return ans;
    }
};
