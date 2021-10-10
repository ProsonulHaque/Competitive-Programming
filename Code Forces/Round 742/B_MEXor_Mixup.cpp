/*
    ***************************
    *    Author: rafa45       *
    *    Date: 05 Sep 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int computeXOR(int n){
  if (n % 4 == 0)
    return n;
 
  if (n % 4 == 1)
    return 1;
 
  if (n % 4 == 2)
    return n + 1;
 
  return 0;
}

int main()
{
    IOS


    int tc;
    cin >> tc;

    while(tc--){
        ll a, b; cin >> a >> b;
        
        ll xr = computeXOR(a-1);
        
        int ans = a + (xr != b) + (xr^b == a);
        
        cout << ans << endl;
    }


    return 0;
}