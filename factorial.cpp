#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int m=1e9+7;
const int maxn=1000000;
int main() {
    vector<long long >dp(maxn+1,0);
    dp[0]=1;
    for(int i=1;i<=maxn;i++){
        dp[i]=(i*dp[i-1])%m;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
