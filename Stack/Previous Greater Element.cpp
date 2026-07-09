class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        int n = arr.size();

        vector<int> output;
        stack<int> st;

        for(int i = 0; i < n; i ++) {

            int elem = arr[i];

            if(st.size() == 0) {
                output.push_back(-1);
            }
            else if(st.top() > elem) {
                output.push_back(st.top());
            }
            else if(st.top() <= elem) {

                while(st.size() > 0 && st.top() <= elem) {
                    st.pop();
                }

                if(st.size() == 0) {
                    output.push_back(-1);
                }
                else {
                    output.push_back(st.top());
                }
            }

            st.push(elem);
        }
       
        return output;
    }
};
