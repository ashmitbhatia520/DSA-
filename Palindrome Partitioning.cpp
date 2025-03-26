class Solution {
public:
bool ispart(string s){
    string s2 = s;
    reverse(s.begin(),s.end());
    return s==s2;
}
void gets(string s,vector<string> &partition, vector<vector<string>> &ans){
    if(s.size() == 0){
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part = s.substr(0,i+1);
        if(ispart(part)){
            partition.push_back(part);
            gets(s.substr(i+1),partition,ans);
            partition.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;
        gets(s,partition,ans);
        return ans;
    }
};
