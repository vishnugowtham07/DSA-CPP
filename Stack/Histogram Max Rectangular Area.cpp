class Solution {
    vector<int> nextSmallerLeft(vector<int>& arr){
        int n = arr.size();
        vector<int> output;
        int pseudo_idx = -1;
        stack<int> st;

        for(int i = 0; i < n; i++){
            int elem = arr[i];
            if(st.size() == 0)
                output.push_back(pseudo_idx);
            else if(st.size() > 0 && arr[st.top()] < elem)
                output.push_back(st.top());
            else if(st.size() > 0 && arr[st.top()] >= elem){
                while(st.size() > 0 && arr[st.top()] >= elem){
                    st.pop();
                }
                if(st.size() == 0)
                    output.push_back(pseudo_idx);
                else
                    output.push_back(st.top());
            }
            st.push(i);
        }
        return output;
    }

    vector<int> nextSmallerRight(vector<int>& arr){
        int n = arr.size();
        vector<int> output;
        int pseudo_idx = n;
        stack<int> st;

        for(int i = n - 1; i >= 0; i--){
            int elem = arr[i];
            if(st.size() == 0)
                output.push_back(pseudo_idx);
            else if(st.size() > 0 && arr[st.top()] < elem)
                output.push_back(st.top());
            else if(st.size() > 0 && arr[st.top()] >= elem){
                while(st.size() > 0 && arr[st.top()] >= elem){
                    st.pop();
                }
                if(st.size() == 0)
                    output.push_back(pseudo_idx);
                else
                    output.push_back(st.top());
            }
            st.push(i);
        }
        reverse(output.begin(), output.end());
        return output;
    }

public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();

        vector<int> nsl = nextSmallerLeft(arr);
        vector<int> nsr = nextSmallerRight(arr);
        vector<int> width(n);

        for(int i = 0; i < n; i++){
            width[i] = nsr[i] - nsl[i] - 1;
        }
        int maxi = 0;

        for(int i = 0; i < n; i++){
            int area = arr[i] * width[i];
            maxi = max(maxi, area);
        }
        return maxi;
    }
};
