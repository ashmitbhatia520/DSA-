class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        unordered_map<int,bool>n;
        for(int i:arr){
            if(i>0){
                n[i] = true;;
            }
        }
        int m = 1;
        while(n.find(m) != n.end()){
            m++;
        }
        return m;
    }
};
