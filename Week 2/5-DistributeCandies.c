class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> distNum;
        for(int i=0;i<candies.size();i++){
            distNum.insert(candies[i]);
        }
        return min(candies.size()/2,distNum.size());
    }
};
