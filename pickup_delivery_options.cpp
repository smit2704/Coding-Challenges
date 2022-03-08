#include <bits/stdc++.h>
using namespace std;
// #define MOD 10^9+7;
class Solution {
    int MOD = 1e9 + 7;
    vector<vector<int>> memo;
    long solve(int unpicked,int undelivered ){
        if(unpicked == 0 && undelivered == 0)   return 1;
        if(unpicked<0 || undelivered<0 || undelivered < unpicked){
            return 0;
        }
        if(memo[undelivered][unpicked]){
            return memo[undelivered][unpicked];
        }
    long ans=0;

        // Choices of Picking Orders
        ans +=unpicked*solve(unpicked-1,undelivered);
        ans%=MOD;

        ans+=(undelivered-unpicked)*solve(unpicked,undelivered-1);
        ans%=MOD;

        return memo[undelivered][unpicked]=ans;
    }
public:
    int countOrders(int n) {
        // bool P[n]={0},D[n]={0};
        return solve(n,n);

    }
};
int main(){
    
    return 0;
}