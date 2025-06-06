class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool ne = num<0;
        num = abs(num);
        string res;
        while(num>0){
            res += to_string(num%7);
            num/=7;
        }
        if(ne) res+='-';
        reverse(res.begin(),res.end());
        return res;
    }
};
