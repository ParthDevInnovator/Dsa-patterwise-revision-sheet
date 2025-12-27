class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> output;
        for(int i =0;i<n;i++){
            int low =i+1, high=n-1;
            while(low<high){
                int sum = nums[i]+nums[low]+nums[high];
                if(sum<0){
                    low++;
                } else if(sum>0){
                    high--;
                } else {
                    output.push_back({nums[i],nums[low],nums[high]});
                    int temp1= nums[low],temp2=nums[high];
                    while(low<high && nums[low]==temp1) low++;
                    while(low<high && nums[high]==temp2) high--;
                }
            }
            while(i+1 <n && nums[i]==nums[i+1]) i++;
        }
        return output;
    }
};