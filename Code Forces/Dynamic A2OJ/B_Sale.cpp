/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Sep 2021    *
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


    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(all(a));

    int ans = 0;

    for(int i=0; i<m; i++){
        if(a[i]<0) ans += a[i];
    }

    cout << ans * -1;


    return 0;
}