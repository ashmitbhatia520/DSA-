class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>st;
        for(auto&op:operations){
            int n = st.size();
            if(op == "+"){
                st.push_back(st[n-1]+st[n-2]);
            }
            else if(op=="C"){
                st.pop_back();
            }
            else if(op=="D"){
                st.push_back(st[n-1]<<1);
            }
            else{
                st.push_back(stoi(op));
            }
        }
        return accumulate(st.begin(),st.end(),0);
    }
};
