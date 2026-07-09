class NumMatrix {
public:
    vector <vector <int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
       int n = matrix.size();     // row
       int m = matrix[0].size();  // col
       prefix.resize(n, vector<int>(m, 0));
       for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int curr_val = matrix[i][j]; 

                int top_val = 0;
                if(i > 0)
                    top_val = prefix[i - 1][j];
                int left_val = 0;
                if(j > 0)
                    left_val = prefix[i][j - 1];

                int top_left_val = 0;
                if(i > 0 && j > 0)
                    top_left_val = prefix[i - 1][j - 1];

                prefix[i][j] = curr_val + top_val + left_val - top_left_val;

            }
       }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int n = prefix.size();
        int m = prefix[0].size();

        int curr_val = prefix[row2][col2];

        int top_val = 0;
        if(row1 > 0)
            top_val = prefix[row1 - 1][col2];
        
        int left_val = 0;
        if(col1 > 0)
            left_val = prefix[row2] [col1 -1];

        int top_left_val = 0;
        if(row1 > 0 && col1 > 0)
            top_left_val = prefix[row1 - 1][col1 - 1];

        int sum = curr_val - left_val - top_val + top_left_val;
        return sum;
        
            }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
