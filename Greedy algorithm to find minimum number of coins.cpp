#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	vector<int> ans;
	for(int i=0;i<n;i++){
	    cin>>x;
	    ans.push_back(x);
	}
	int v;
	cin>>v;
	vector<int> arr;
	for(int i=n-1;i>=0;i--){
	    while(v>=ans[i]){
	        v-=ans[i];
	        arr.push_back(ans[i]);
	    }
	}
	cout<<arr.size();

}
