class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        for(long long i=0;i<nums.size();i++){
            for(long long j=i+1;j<nums.size();j++){
                map<long long,int>mp;
                for(long long k=j+1;k<nums.size();k++){
                    long long s=nums[i]+nums[j];
                    s+=nums[k];
                    long long r=target-s;
                    if(mp.find(r)!=mp.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],int(r)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    mp[nums[k]]++;

                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
        
    }
};