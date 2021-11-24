/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Nov 2021    *
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


int main()
{
    IOS


    int n, m, ans = 1e9;
    cin >> n >> m;

    vector<int> v(m);

    for(int &x:v) cin >> x;

    sort(all(v));

    for(int left=0, right=n-1; right<m; left++, right++){
        ans = min(ans, v[right]-v[left]);
    }

    cout << ans;


    return 0;
}