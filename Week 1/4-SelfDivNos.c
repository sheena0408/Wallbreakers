class Solution {
public:
    /*vector<int> find_digits(int num){
        vector<int> digits;
        while(num){
            digits.push_back(num%10);
            num/=10;
        }
        return digits;
    }*/
    bool func(int n){
        int x=n,div;
        while(x){
            div =x%10;
            if(div==0 ||  n%div!=0)return false;
            x/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++)
            if(func(i)) ans.push_back(i);
        return ans;
    }
};
