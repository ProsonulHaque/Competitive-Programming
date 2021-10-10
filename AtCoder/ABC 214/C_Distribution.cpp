/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Aug 2021    *
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


    int n; cin >> n;

    vector<int> s(n), t(n), a(n);

    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++) cin >> t[i];
    a = t;
    for(int i=0; i<2*n; i++) 
        a[(i+1)%n] = min(t[(i+1)%n], s[i%n]+a[i%n]);

    for(int x:a) cout << x << endl;

    return 0;
}