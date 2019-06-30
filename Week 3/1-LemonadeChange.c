class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0;
        if(bills[0]!=5) return false;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) f++;
            else if(bills[i]==10){
                if(f<1) return false;
                t++;
                f--;
            }
            else{
                if(t>=1 && f>=1){
                    t--;
                    f--;
                }
                else if(f>=3) f-=3;
                else return false;
            }
        }
        return true;
    }
};
