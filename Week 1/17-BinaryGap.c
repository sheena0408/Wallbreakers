class Solution {
public:
    int binaryGap(int n) {
        int ans=0,i=0;
        vector<int> index;

        while(n!=0){
            int temp=n%2;
            if(temp==1) index.push_back(i);
            n/=2;
            i++;
        }
        for(int i=0;i<index.size()-1;i++){
            ans=max(ans,index[i+1]-index[i]);
        }
        return ans;
    }
};
