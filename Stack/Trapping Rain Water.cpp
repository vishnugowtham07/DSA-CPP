class Solution {
public: 
    int trap(vector<int>& height) {
        
    int n = height.size();
    vector<int> left_max (n);
    vector<int> right_max(n);
    int L_max = height[0];
    int R_max = height[n-1];

    for(int i = 0; i < n ; i ++){
        if(height[i] > L_max)
            L_max = max(height[i] , L_max);
        left_max[i] = L_max;
    }

    for(int i = n - 1 ; i>= 0; i--){
        if(height[i] > R_max)
            R_max = max(height[i], R_max);
        right_max[i]= R_max;
    }

    int total = 0;
    for(int i = 0 ; i < n; i++){
        total += min(left_max[i] , right_max[i]) - height[i];
    }
    return total;
    }
};
