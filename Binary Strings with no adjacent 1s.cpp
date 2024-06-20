#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int m = 1e9 + 7;
const int maxn= 100000;

int main() {
    vector<int>dp0(maxn+1,0);
    vector<int>dp1(maxn+1,0);
    dp0[1]=1;
    dp1[1]=1;
    for(int i=2;i<=maxn;i++){
        dp0[i]=(dp0[i-1]+dp1[i-1])%m;
        dp1[i]=dp0[i-1]%m;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(dp0[n]+dp1[n])%m<<endl;
    }
    
    return 0;
}
