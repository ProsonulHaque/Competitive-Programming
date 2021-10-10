/*
    ***************************
    *    Author: rafa45       *
    *    Date: 08 Aug 2021    *
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


    int n; cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> rank(n);
    iota(rank.begin(), rank.end(), 0);

    sort(rank.begin(), rank.end(), [&](int i, int j){return a[i]>a[j];});

    cout << rank[1]+1;


    return 0;
}