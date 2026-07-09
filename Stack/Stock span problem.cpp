class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector<int> result(arr.size());
        stack<pair<int,int>>st;
        for(int i=0;i<arr.size();i++)
        {
            pair<int,int> p={arr[i],1};
            while(!st.empty() && arr[i]>=st.top().first){
                p.second+=st.top().second;
                st.pop();
            }
            result[i]=p.second;
            st.push(p);
        }
        return result;
    }
};
