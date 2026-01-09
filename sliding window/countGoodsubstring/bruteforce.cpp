class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i+2<n;i++){
            char a=s[i];
            char b=s[i+1];
            char c=s[i+2];
            if(a!=b A&& b!=c && c!=a){
                count++;
            }
        }
        return count;
    }
};