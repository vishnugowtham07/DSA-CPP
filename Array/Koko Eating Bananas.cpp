class Solution {
public:
    long calculate_hours(vector<int>& piles,int k){
        long total_hours = 0;
        for(int i = 0; i < piles.size();i++){
            long bananas = piles[i];
            total_hours += (bananas + k - 1) / k;;
        }
        return total_hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_bananas = INT_MIN;
        for(int i = 0 ; i < n; i++){
            int bananas = piles[i];
            if(bananas > max_bananas){
                max_bananas = max(max_bananas , bananas);
            }
        }

        int start = 1;
        int end = max_bananas;

        while(start <= end){
            int mid = start + (end - start)/2;
            long total_hours = calculate_hours(piles,mid);
            if(total_hours <= h){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return start;
    }
};
