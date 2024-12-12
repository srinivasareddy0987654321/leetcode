class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>hash;
        int l=0;
        int r=0;
        int maxfeq=0;
        int maxlen=0;
        while(r<s.size()){
            hash[s[r]]++;
            maxfeq=max(maxfeq,hash[s[r]]);
            if((r-l+1)-maxfeq>k){
                hash[s[l]]--;
                l++;
            }
            if((r-l+1)-maxfeq<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
            
        }
        return maxlen;
        
    }
};