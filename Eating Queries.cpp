#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>x;
        ans.push_back(x);
    }
    int q;
    cin>>q;
    sort(ans.rbegin(),ans.rend());
    for(int i=1;i<n;i++){
        ans[i]+=ans[i-1];
    }
    while(q--){
        int y;
        cin>>y;
        int lb = lower_bound(ans.begin(),ans.end(),y)-ans.begin();
        lb+=1;
        if(lb>n){
            cout<<-1<<" ";
        }
        else{
            cout<<lb<<" ";
        }
    }
}
