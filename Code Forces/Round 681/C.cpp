/*
Author: rafa45
Date: 3 Nov 2020
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define endl              "\n"
#define PRIME	          M
#define mod               M
#define ll                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

int main()
{
    IOS

    int t, i, n, j;
    cin >> t;

    while(t--){
        cin >> n;
        ll sum=0;

        vector<pii> ab(n);

        for(i=0; i<n; i++){
            cin >> ab[i].first;
        }
        for(i=0; i<n; i++){
            cin >> ab[i].second;
            sum += ab[i].second;
        }

        sort(ab.begin(), ab.end());

        ll preSum=0, ans=sum;

        for(i=0; i<n; i++){
            preSum += ab[i].second;
            ll a = ab[i].first;
            ans = min(ans, max(a, sum-preSum));
        }

        cout << ans << endl;
    }

    return 0;
}
