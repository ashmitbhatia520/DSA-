class Solution {
public:
int digit(int num){
    int ans = 0;
    while(num){
        ans+=(num%10);
        num/=10;
    }
    return ans;
}
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(digit(i)%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};
