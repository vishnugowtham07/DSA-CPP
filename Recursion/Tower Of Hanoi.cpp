class Solution {
  public:
    
    int towerOfHanoi(int n, int source, int helper, int dest) {
        // code here
        if(n == 1){
            return 1;
        }
        int count1 = towerOfHanoi(n-1 , source , dest , helper);
        int count2 = towerOfHanoi(n-1 , helper , source ,dest);
        
        return count1 + 1 + count2;
            
    }
};
