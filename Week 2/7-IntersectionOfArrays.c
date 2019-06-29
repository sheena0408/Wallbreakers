class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int h[1000]={0};
        for(int i=0;i<nums1.size();i++){
            h[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++){
            if(h[nums2[i]]==1){
                h[nums2[i]]=0;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};
