class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int>res(n);
        int l=0,r=n-1,k=n-1;
        while(l<=r){
            int ls=nums[l]*nums[l];
            int rs=nums[r]*nums[r];
            if(ls>rs){
                res[k--]=ls;
                l++;
            } else{
                res[k--]=rs;
                r--;
            }
        }
        return res;
    }
};