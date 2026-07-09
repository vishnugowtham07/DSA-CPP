class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0;
        int n = s.size();
        vector <int> freq(256,0);
        int len = 0;
        while(j < n){
            freq[s[j]]++;
            
            if(freq[s[j]] == 1){
                len = max(len , (j-i+1));
                j++;
            }
            else if(freq[s[j]] > 1){
                while(freq[s[j]] > 1){
                    freq[s[i]]--;
                    i++;
                }
                len = max(len , (j - i +1));
                j++;
            }
        }
        return len;
    }
};
