/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Jul 2021    *
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


    int n, k; cin >> n >> k;

    vector<int> v(n+1);
    unordered_map<int, int> mp;

    for(int i=1; i<=n; i++) cin >> v[i];

    for(int i=1; i<=k; i++) mp[v[i]]++;
    
    int ans = mp.size(), p1 = 1;

    for(int p2=k+1; p2<=n; p1++,p2++){
        mp[v[p2]]++;
        mp[v[p1]]--;
        if(mp[v[p1]] == 0) mp.erase(v[p1]);
        ans = max(ans, (int)mp.size());
    }

    cout << ans << endl;


    return 0;
}