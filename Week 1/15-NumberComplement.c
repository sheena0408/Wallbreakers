class Solution {
public:
    int findComplement(int n) {
        int x=0,temp=n;
        while(temp){
            temp =temp>>1;
            n=n^(1<<x);
            x++;
        }
        return n;
    }
};
