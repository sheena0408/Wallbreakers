class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> ans;
        vector<string> morse;
        morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        for(int i=0;i<words.size();i++){
            string temp;
            for(int j=0;j<words[i].size();j++){
                temp+=morse[words[i][j]-'a'];
            }
            ans.insert(temp);
            temp.clear() ;
        }
        return ans.size();
    }
};
