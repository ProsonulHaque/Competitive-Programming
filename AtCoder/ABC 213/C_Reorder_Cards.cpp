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
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS

    int h, w, n; cin >> h >> w >> n;

    vector<int> x(n), y(n), X(n), Y(n);

    for(int i=0; i<n; i++) cin >> x[i] >> y[i];

    X = x; Y = y;

    sort(all(x)); x.erase(unique(all(x)), x.end());
    sort(all(y)); y.erase(unique(all(y)), y.end());

    unordered_map<int, int> rowMap, colMap;

    for(int i=0; i<x.size(); i++) rowMap[x[i]] = i+1;
    for(int i=0; i<y.size(); i++) colMap[y[i]] = i+1;

    for(int i=0; i<n; i++) cout << rowMap[X[i]] << " " << colMap[Y[i]] << endl;

    return 0;
}