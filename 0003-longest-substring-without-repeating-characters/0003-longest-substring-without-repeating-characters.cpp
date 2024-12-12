class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        unordered_map<char,int>mp;
        int maxlen=0;
        while(right<s.size()){
            if(mp.find(s[right])!=mp.end()){
                left=max(left,mp[s[right]]+1);
            }
            maxlen=max(maxlen,right-left+1);
            mp[s[right]]=right;
            right++;

        }
        return maxlen;
    }
};