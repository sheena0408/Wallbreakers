class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //vector<int> ans;
        int n=digits.size(),f=1;
        for(int i=n-1;i>=0;i--){
            if(f) digits[i]++;
            if(digits[i]>9){
                digits[i]-=10;
                f=1; //has a carry need to add 1 at start
            }
            else f=0;
        }
        if(f) digits.insert(digits.begin(),1);
        return digits;
    }
};
