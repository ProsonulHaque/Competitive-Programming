/*
    ***************************
    *    Author: rafa45       *
    *    Date: 13 Dec 2021    *
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


    int n;
    cin >> n;

    vector<int> waves(n);

    for(int i=0; i<n; i++) cin >> waves[i];

    sort(all(waves));

    for (int i = 0; i < n-1; i+=2)
    {
        swap(waves[i], waves[i+1]);
    }
    
    for(int i=0; i<n; i++) cout << waves[i] << " ";

    return 0;
}