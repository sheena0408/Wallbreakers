class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        string input=A+' '+B;
        map<string,int> h;
        vector<string> ans;
        int start=0,end=0;
        for(int i=0;i<input.length();i++){
            if(input[i]==' '){
                end=i;
                h[input.substr(start,end-start)]++;
                start=i+1;
            }
            if(i==input.length()-1)
                h[input.substr(start,i-start+1)]++;
        }
        for(auto i : h)
            if(i.second==1)
                ans.push_back(i.first);

        return ans;
    }
};
