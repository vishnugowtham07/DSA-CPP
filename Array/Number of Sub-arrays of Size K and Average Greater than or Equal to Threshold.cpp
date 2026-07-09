class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int target = threshold * k;
        int i = 0,j = 0;
        int count = 0,sum = 0;
        while(j < n){
            sum += arr[j];
            if(j - i + 1 < k)
                j++;
            else if(j - i + 1 == k){
                if(sum >= target){
                    count ++;
                }
                sum -= arr[i];
                j++;
                i++;
            }
        }
        return count;
    }
};
