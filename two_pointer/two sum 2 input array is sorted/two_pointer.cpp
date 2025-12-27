class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        //pick up first element
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            //second element
               if(numbers[i]+numbers[j]==target){
                return {i+1,j+1};
               }
            }
        }
        return {};
    }
};