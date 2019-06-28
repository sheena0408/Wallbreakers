class Solution {
public:
    int findSum(int n){
        int sum=0;
        while(n>=10){
            sum+=pow(n%10,2);
            n/=10;
        }
        sum+=pow(n,2);
        return sum;
    }
    bool isHappy(int n) {
        if(n<=0) return false;
        while(n){
            n=findSum(n);
            if(n==1) return true;
            if(n==4) return false;
        }
        return false;
    }
};
