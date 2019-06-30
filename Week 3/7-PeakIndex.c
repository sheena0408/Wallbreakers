class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n=A.size();
        int l=0,r=n-1,m;
        while(l<=r){
            m=(l+r)/2;
            if(A[m]>A[m+1] && A[m]>A[m-1]) return m;
            else if(A[m]<A[m-1]) r=m-1;
            else l=m+1;
        }
        return -1;
    }
};
