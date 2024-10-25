class Solution {

public:
    vector<int>generaterow(int row){
        vector<int>ans;
        int anss=1;
        ans.push_back(1);
        for(int col=1;col<row;col++){
            anss=anss*(row-col);
            anss/=col;
            ans.push_back(anss);

        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
        
    }
};