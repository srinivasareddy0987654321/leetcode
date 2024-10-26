class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int low=m-1;
        int high=n-1;
        int k=(n+m)-1;
        while(low>=0 && high>=0){
            if(nums1[low]<=nums2[high]){
                nums1[k]=nums2[high];
                high--;
                k--;
            }
            else{
                nums1[k]=nums1[low];
                low--;
                k--;

            }

        }
        while(low>=0){
            nums1[k]=nums1[low];
            low--;
            k--;
        }
        while(high>=0){
            nums1[k]=nums2[high];
            high--;
            k--;
        }
    }
};