class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
         return 1;
        return 0;
    }
    int maxVowels(string s, int k) {
        int max_count = INT_MIN;
        int i = 0, j = 0;
        int n = s.size();
        int count = 0;
        while(j < n){
            if(isvowel(s[j]))
                count++;
            if(j - i + 1 < k){
                j++;
            }
            else if(j - i +1 == k){
                max_count = max(max_count , count);
                if(isvowel(s[i]))
                    count --;
                i++;
                j++;
            }
        }
        return max_count;
    }
};
