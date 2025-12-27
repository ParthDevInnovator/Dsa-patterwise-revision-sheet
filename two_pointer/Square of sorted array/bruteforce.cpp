class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();
        vector<int>res;
        for(int i =0;i<n;i++){
            res[i]=nums[i]*nums[i];
        }
        sort(res.begin(),res.end());
        return res;
    }
};