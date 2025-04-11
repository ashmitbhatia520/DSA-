class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=0){
                arr[i] = arr[j];
                i++;
            }
        }
        for(int j=i;j<arr.size();j++){
            arr[j] = 0;
        }
    }
};
