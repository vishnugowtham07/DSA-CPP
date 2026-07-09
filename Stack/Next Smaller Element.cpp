class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        vector<int> output;
        
        stack <int> st;
        int n = arr.size();
        for(int i = n -1 ; i >= 0 ; i--)
        {
            int elem = arr[i];
            if(st.size() == 0){
                output.push_back(-1);
            }
            else if(st.size() > 0 && st.top() < elem)
                {
                    output.push_back(st.top());
                }
            else if(st.size() > 0 && st.top() >= elem ){
                while(st.size() > 0 && st.top() >= elem){
                    st.pop();
                }
                if(st.size() == 0)
                    output.push_back(-1);
                else
                    output.push_back(st.top());
            }
            st.push(elem);
        }
        reverse(output.begin(),output.end());
        return output;
    }
};
