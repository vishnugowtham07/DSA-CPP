class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        vector<pair<int, int>> temp(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            temp[i] = {arr[i], i};
        }

        sort(temp.begin(), temp.end());

        int start = 0;
        int end = temp.size() - 1;

        while (start < end) {

            int sum = temp[start].first + temp[end].first;

            if (sum == target) {
                return {temp[start].second, temp[end].second};
            }
            else if (sum > target) {
                end--;
            }
            else {
                start++;
            }
        }

        return {};
    }
};
