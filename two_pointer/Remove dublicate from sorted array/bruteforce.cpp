class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        if(n==0) return 0;
          vector<int> temp;
          temp.push_back(nums[0]);
          for(int i=0;i<n;i++){
            if(nums[i]!=temp.back()){
                temp.push_back(nums[i]);
            }
          }
          for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
          }
          return temp.size();
           }
};