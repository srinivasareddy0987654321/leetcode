class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        int right=0;
        int maxpoint=0;
        int rightsize=cardPoints.size()-1;
        for(int i=0;i<k;i++){
            left=left+cardPoints[i];
            maxpoint=left;
        }
        for(int i=k-1;i>=0;i--){
            left=left-cardPoints[i];
            right=right+cardPoints[rightsize];
            maxpoint=max(maxpoint,left+right);
            rightsize--;
        }
        return maxpoint;
        
    }
};