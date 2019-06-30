class Solution {
public:
    int firstUniqChar(string s) {
        map<int,pair<int,int>> h;
        int ans=INT_MAX;
        for(int i=0;i<s.length();i++){
            h[s[i]-'a'].first++;
            h[s[i]-'a'].second = i;
        }
        for(int i=0;i<26;i++){
            if(h[i].first==1){
                ans=min(ans,h[i].second);
            }
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};
