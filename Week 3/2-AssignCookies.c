class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());

        int j=0,ans=0;
        for(int i=0;i<n && j<m;i++){
            if(g[i]<=s[j]){
                ans++;
                j++;
            }
        }
        return ans;
    }
};
