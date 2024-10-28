class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ls=INT_MIN;
        int count=-1;
        int csc=0 ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == ls){
                count+=1;
                ls=nums[i];
            }
            else if(ls!=nums[i]){
                count=1;
                ls=nums[i];
            }
            csc=max(csc,count);
        }
        return csc;
        
    }
};