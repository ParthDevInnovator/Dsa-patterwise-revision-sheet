class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg,pos;
        for(int x:nums){
            if(x<0) neg.push_back(x);
            else pos.push_back(x);
        }
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        int n =neg.size();
        int m =pos.size();
        vector<int> res(n+m);
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(neg[i]<=pos[j]){
                res[k++]=neg[i++];
            } else{
                res[k++]=pos[j++];
            }
        }
         while(i<n) res[k++]=neg[i++];
         while(j<m) res[k++]=pos[j++];
         return res;
    }
};