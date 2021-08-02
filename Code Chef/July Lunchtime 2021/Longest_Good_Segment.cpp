/*
    ***************************
    *    Author: rafa45       *
    *    Date: 31 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        ll n=0, k=0, s=0, ans=0;
        cin >> n >> k >> s;

        vector<ll> a(n);

        for(ll i=0; i<n; i++) cin >> a[i];

        ll i=0, j=0, sum = 0;

        while(j<n){
            sum += a[j];
            while(sum>s*k && i<j){
                sum -= a[i]; 
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }

        cout << ans << endl;
    }


    return 0;
}